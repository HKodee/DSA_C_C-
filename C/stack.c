#include <stdio.h>

void push(int value){
    if (top == capacity-1){
        printf("stack is underlying storage is overfloe\n");
        return;
    }
    top = top + 1;
    array[top] = value;
}

void pop{
    if (top == -1){
        printf("stack is empty storage is underflow\n");
        return;
    }
    data = array[top];
    return data;
}

int main()
{
    printf("Hello World");

    return 0;
}