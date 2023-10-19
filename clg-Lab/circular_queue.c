#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int queue[MAX], front = -1, rear = -1;

void enqueue(int item);
int dequeue();
void display();

int main()
{
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        int item;
        int ch;

        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &item);
            enqueue(item);
            printf("\n\n");
            break;

        case 2:
            item = dequeue();
            if (item != -1)
                printf("Element that was dequeued: %d", item);
            printf("\n\n");
            break;

        case 3:
            printf("Element in the queue: ");
            display();
            printf("\n\n");
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\nWrong choice\n");
        }
    }

    return 0;
}

void enqueue(int item)
{
    if ((front == 0 && rear == MAX - 1) || (rear + 1 == front))
    {
        printf("Overflow!! Queue is full.\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
        queue[front] = item;
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = item;
    }
}

int dequeue()
{
    int item;
    if (front == -1)
    {
        printf("Underflow!! Queue is empty.\n");
        return -1;
    }

    item = queue[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
    return item;
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    for (int i = front; i != rear;)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }

    printf("%d", queue[rear]);
}
