#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head;

// Function to add a new node at the end of the list
void addNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        return;
    }
    struct node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to insert a new node after a given node
void insertAfter(struct node* prevNode, int data) {
    if(prevNode == NULL) {
        printf("Previous node cannot be NULL");
        return;
    }
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to delete a node given the key
void deleteNode(int data) {
    struct node* temp = head;


    if (head == NULL) {

     printf("List is empty");
        return;
    } 
    
    if (head->data == data) {

            head = head->next;
    }

    while (temp != NULL) {

        if (temp->next != NULL && temp->next->data ==data) {

            temp->next = temp->next->next;
            return;
        }

        temp = temp->next;
    }
}

// Function to insert a new node before a given node
void insertBefore(struct node* nextNode, int data) {

    
    if(nextNode == NULL) {
        printf("Next node cannot be NULL");
        return;
    }
     struct node* newNode = (struct node*)malloc(sizeof(struct node));
      newNode->data = data;
   
      if (nextNode == head)  {

        newNode->next = head; 
        head = nextNode;
      }
 
    
    struct node* temp = head;
    while (temp != NULL) {
        
        if (temp->next != NULL && temp->next == nextNode) {
                newNode->next =  temp->next;
                temp->next = newNode;
                return;
        }
    }
}