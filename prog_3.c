#include <stdio.h>
#include <stdlib.h>

// Definition of node
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at end
void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Reverse traversal using recursion
void reverseTraversal(struct Node* node) {
    if (node == NULL)
        return;

    reverseTraversal(node->next);
    printf("%d ", node->data);
}

int main() {
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        insert(value);
    }

    printf("Reverse traversal of linked list: ");
    reverseTraversal(head);

    return 0;
}
