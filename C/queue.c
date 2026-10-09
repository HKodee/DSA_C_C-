
#include <stdio.h>

#define N 15

int front = -1, rear = -1;
int array[N];

// Insert an element
void Enque(int data)
{
    // Check whether the circular queue is full
    if ((rear + 1) % N == front)
    {
        printf("Queue is full\n");
        return;
    }

    // First element
    if (front == -1)
    {
        front = 0;
    }

    rear = (rear + 1) % N;
    array[rear] = data;
}

// Remove an element
int Deque()
{
    // Check whether the queue is empty
    if (front == -1)
    {
        printf("Queue is empty\n");
        return -1;
    }

    int data = array[front];

    // If this was the last element
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % N;
    }

    return data;
}

// Return the number of elements
int getSize()
{
    if (front == -1)
    {
        return 0;
    }

    if (front > rear)
    {
        return N - front + rear + 1;
    }
    else
    {
        return rear - front + 1;
    }
}

int main()
{
    Enque(10);
    Enque(20);
    Enque(30);

    printf("Queue size: %d\n", getSize());

    printf("Removed: %d\n", Deque());

    printf("Queue size after deletion: %d\n", getSize());

    return 0;
}
