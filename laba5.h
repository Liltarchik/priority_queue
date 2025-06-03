#ifndef LABA5_H
#define LABA5_H
#define QUEUE_EMPTY_MSG "Черга порожня!"


typedef int TElQueue;
typedef struct SElQueue {
    TElQueue info;
    SElQueue *next;
} TPQueue;


typedef struct SQueue {
    TPQueue* first;
    TPQueue* last;
} TQueue;

void initQueue(TQueue &q);
bool isEmpty(TQueue q);
void inQueue(TQueue &q, TElQueue newEl);
TElQueue DEQUEUE(TQueue &q);
int len(TQueue q);
TElQueue firstEl(TQueue q);
TElQueue lastEl(TQueue q);
#endif


