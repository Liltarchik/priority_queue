#include "laba5.h"
#include <iostream>

// Функція для ініціалізації черги
void initQueue(TQueue &q) {
    q.first = nullptr;
    q.last = nullptr;
}


bool isEmpty(TQueue q) {
    return q.first == nullptr;
}

void inQueue(TQueue &q, TElQueue newEl) {
    TPQueue* el = new TPQueue;
    el->info = newEl;
    el->next = nullptr;

    if (isEmpty(q)) {
        q.first = el;
        q.last = el;
    } else {
        TPQueue* current = q.first;
        TPQueue* prev = nullptr;
        while (current && current->info <= newEl) {
            prev = current;
            current = current->next;
        }
        if (!prev) {
            el->next = q.first;
            q.first = el;
        }
        else {
            prev->next = el;
            el->next = current;
        }
        if (!current) {
            q.last = el;
        }
    }
}

TElQueue DEQUEUE(TQueue &q) {
    if (isEmpty(q)) {

        throw QUEUE_EMPTY_MSG;
    }

    TElQueue elValue = q.first->info;
    TPQueue* dEl = q.first;

    q.first = q.first->next;

    delete dEl;

    if (q.first == nullptr) {
        q.last = nullptr;
    }
    return elValue;
}


int len(TQueue q) {
    int count = 0;
    TPQueue* current = q.first;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

TElQueue firstEl(TQueue q) {
    if (isEmpty(q)) {
        throw QUEUE_EMPTY_MSG;
    }
    return q.first->info;
}

TElQueue lastEl(TQueue q) {
    if (isEmpty(q)) {
        throw QUEUE_EMPTY_MSG;
    }
    return q.last->info;
}