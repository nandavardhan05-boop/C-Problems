struct Node* insert(struct Node* root, int val) {
    if(root == NULL) {
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = NULL;
        return newNode;
    }

    if(val < root->data)
        root->next = insert(root->next, val);
    else
        root->next = insert(root->next, val);

    return root;
}
