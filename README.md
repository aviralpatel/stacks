
# Stacks in C

A stack in C is a dynamic data structure that allows you to store a collection of elements. A stack follows the Last-In-First-Out (LIFO) principle, where the last element added to the stack is the first one to be removed.

## Creating a Stack

To create a stack in C, you can use an array to store the elements and a variable to keep track of the top of the stack.

```
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;
```

## Pushing elements

To push an element onto the stack, you increment the top variable and assign the element to the corresponding index in the array.

```
void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = element;
}
```
## Popping Elements

To pop an element from the stack, you first check to make sure that the stack is not empty, and then decrement the top variable to remove the top element. 

```
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
```

## Displaying Elements

To display the elements in the stack, you can loop through the stack and print out each element.

```
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
```


