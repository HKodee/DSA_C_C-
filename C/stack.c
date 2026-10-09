
#include <stdio.h>

#define CAPACITY 5

int stack[CAPACITY];
int top = -1;

void push(int value)
{
    if (top == CAPACITY - 1)
    {
        printf("Stack overflow: storage is full\n");
        return;
    }

    top = top + 1;
    stack[top] = value;
}

int pop(void)
{
    if (top == -1)
    {
        printf("Stack underflow: stack is empty\n");
        return -1;
    }

    int data = stack[top];
    top = top - 1;

    return data;
}

void display(void)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements (top to bottom):\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main(void)
{
    push(10);
    push(20);
    push(30);

    display();

    printf("Popped element: %d\n", pop());

    display();

    return 0;
}
