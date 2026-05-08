#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* insert(struct Node* head, int val) {
    struct Node* temp = malloc(sizeof(struct Node));

    temp->data = val;
    temp->prev = NULL;
    temp->next = head;

    if(head != NULL)
        head->prev = temp;

    return temp;
}
