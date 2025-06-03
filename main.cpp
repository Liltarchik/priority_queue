#include <iostream>
#include "laba5.h"
using namespace std;

int main() {
    TQueue myQueue;
    initQueue(myQueue);

    int choice, value;
    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Check if empty\n";
        cout << "4. Get length\n";
        cout << "5. Get first element\n";
        cout << "6. Get last element\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            inQueue(myQueue, value);
            break;
        case 2:
            if (!isEmpty(myQueue)) {
                cout << "Dequeued: " << DEQUEUE(myQueue) << endl;
            } else {
                cout << "Queue is empty.\n";
            }
            break;
        case 3:
            cout << "Queue is " << (isEmpty(myQueue) ? "empty" : "not empty") << endl;
            break;
        case 4:
            cout << "Queue length: " << len(myQueue) << endl;
            break;
        case 5:
            if (!isEmpty(myQueue)) {
                cout << "First element: " << firstEl(myQueue) << endl;
            } else {
                cout << "Queue is empty.\n";
            }
            break;
        case 6:
            if (!isEmpty(myQueue)) {
                cout << "Last element: " << lastEl(myQueue) << endl;
            } else {
                cout << "Queue is empty.\n";
            }
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
