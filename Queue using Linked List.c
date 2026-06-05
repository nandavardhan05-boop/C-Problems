struct Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if(rear == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
