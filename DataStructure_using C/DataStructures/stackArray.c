#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE], top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
    } else {
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Error: Stack is empty\n");
    } else {
        printf("Stack: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}