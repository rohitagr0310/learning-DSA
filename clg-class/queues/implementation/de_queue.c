#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int deque[MAX];
int front = -1;
int rear = -1;

void insertFront(int item);
void insertRear(int item);
int deleteFront();
int deleteRear();
void display();

int main()
{
    int choice, item;

    while (1)
    {
        printf("\n1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert at the front: ");
            scanf("%d", &item);
            insertFront(item);
            break;
        case 2:
            printf("Enter the element to insert at the rear: ");
            scanf("%d", &item);
            insertRear(item);
            break;
        case 3:
            item = deleteFront();
            if (item != -1)
                printf("Deleted element from front: %d\n", item);
            break;
        case 4:
            item = deleteRear();
            if (item != -1)
                printf("Deleted element from rear: %d\n", item);
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void insertFront(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Overflow! Deque is full.\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (front == 0)
    {
        front = MAX - 1;
    }
    else
    {
        front = front - 1;
    }

    deque[front] = item;
}

void insertRear(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Overflow! Deque is full.\n");
        return;
    }

    if (rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }

    deque[rear] = item;
}

int deleteFront()
{
    if (front == -1)
    {
        printf("Underflow! Deque is empty.\n");
        return -1;
    }

    int item = deque[front];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }

    return item;
}

int deleteRear()
{
    if (rear == -1)
    {
        printf("Underflow! Deque is empty.\n");
        return -1;
    }

    int item = deque[rear];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        rear = MAX - 1;
    }
    else
    {
        rear = rear - 1;
    }

    return item;
}

void display()
{
    if (front == -1)
    {
        printf("Deque is empty.\n");
        return;
    }

    printf("Elements in the deque: ");
    int i = front;
    if (front <= rear)
    {
        while (i <= rear)
        {
            printf("%d ", deque[i]);
            i++;
        }
    }
    else
    {
        while (i < MAX)
        {
            printf("%d ", deque[i]);
            i++;
        }
        i = 0;
        while (i <= rear)
        {
            printf("%d ", deque[i]);
            i++;
        }
    }
    printf("\n");
}
