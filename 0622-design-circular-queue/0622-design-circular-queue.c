
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *v;
    int front, rear;
    int n, size;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = malloc(sizeof(MyCircularQueue));

    obj->v = malloc(k * sizeof(int));
    obj->front = 0;
    obj->rear = -1;
    obj->n = k;
    obj->size = 0;

    return obj;
}
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj)) {
        return false;
    }

    obj->rear = (obj->rear + 1) % obj->n;
    obj->v[obj->rear] = value;
    obj->size++;

    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return false;
    }

    obj->front = (obj->front + 1) % obj->n;
    obj->size--;

    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return -1;
    }

    return obj->v[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return -1;
    }

    return obj->v[obj->rear];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->size == 0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return obj->size == obj->n;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->v);
    free(obj);
}
