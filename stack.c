#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
}