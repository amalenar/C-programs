#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};


struct List {
    struct Node* head;
    struct Node* tail;
};

void addNode(struct List* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->prev = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void insertAfter(struct Node* node, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    newNode->prev = node;
    newNode->next = node->next;
    if (node->next != NULL) {
        node->next->prev = newNode;
    }
    node->next = newNode;
}

void insertBefore(struct Node* node, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));


    newNode->data = data;

    newNode->next = node;
    newNode->prev = node->prev;
   
    if (node->prev != NULL) {
        node->prev->next = newNode;
    }
    node->prev = newNode;
}

void deleteNode(struct List* list, struct Node* node) {

     if (node == list->head) {
        list->head = node->next;
    }
    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
   
    if (node == list->tail) {
        list->tail = node->prev;
    }
    free(node);
}

void printList(struct List* list) {
    struct Node* current = list->head;
    while (current != NULL) {

        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct List* list = (struct List*)malloc(sizeof(struct List));
    list->head = NULL;
    list->tail = NULL;

    addNode(list, 1);
    addNode(list, 2);
    addNode(list, 3);
    printList(list);

    insertAfter(list->head, 4);
    printList(list);

    insertBefore(list->tail, 5);
    printList(list);

    deleteNode(list, list->head);
    printList(list);

    return 0;
}