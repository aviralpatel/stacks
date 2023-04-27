#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
  if (top >= MAX_SIZE - 1) {
    printf("Error: Stack overflow\n");
    return;
  }
  stack[++top] = data;
}

int pop() {
  if (top < 0) {
    printf("Error: Stack underflow\n");
    return -1;
  }
  return stack[top--];
}

void display() {
  if (top < 0) {
    printf("Stack is empty\n");
    return;
  }
  printf("Stack elements: ");
  for (int i = 0; i <= top; i++) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main() {
  push(10);
  push(20);
  push(30);
  display();  // Stack elements: 10 20 30
  pop();
  display();  // Stack elements: 10 20
  push(40);
  display();  // Stack elements: 10 20 40
  return 0;
}
