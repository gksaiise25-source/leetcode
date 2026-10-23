#include <stdlib.h>
#include <limits.h>

typedef struct {
    int *stack;
    int *minStack;
    int top;
    int capacity;
} MinStack;

MinStack* minStackCreate() {
    MinStack* obj = (MinStack*)malloc(sizeof(MinStack));

    obj->capacity = 30001;
    obj->stack = (int*)malloc(obj->capacity * sizeof(int));
    obj->minStack = (int*)malloc(obj->capacity * sizeof(int));
    obj->top = -1;

    return obj;
}

void minStackPush(MinStack* obj, int value) {
    obj->top++;

    obj->stack[obj->top] = value;

    if (obj->top == 0) {
        obj->minStack[obj->top] = value;
    } else {
        int prevMin = obj->minStack[obj->top - 1];

        obj->minStack[obj->top] =
            (value < prevMin) ? value : prevMin;
    }
}

void minStackPop(MinStack* obj) {
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->minStack[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj->stack);
    free(obj->minStack);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/