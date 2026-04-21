#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if(rear == MAX-1)
        printf("Full\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = x;
    }
}

void dequeue() {
    if(front == -1 || front > rear)
        printf("Empty\n");
    else
        printf("Removed: %d\n", queue[front++]);
}
