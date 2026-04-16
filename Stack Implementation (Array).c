#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1)
        printf("Overflow\n");
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        printf("Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}
