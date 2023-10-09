#include <stdio.h>
void enqueue();
void dequeue();
void display();
int queue[50], rear = -1, front = -1;

int main()
{
    int ch;
    printf("1. Insert");
    printf("\n2. Delete");
    printf("\n3. diplay");
    printf("\n4. End program");
    while (1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
        }
        defaut:
        {
            printf("\nwrong choice");
        }
        }
    }
}

void enqueue()
{
    if (rear == 49)
    {
        printf("\nOverflow");
    }
    else
    {
        if (rear == -1)
        {
            front++;
            rear++;
        }
        else
            rear++;
        scanf("%d", &queue[rear]);
    }
}

void dequeue()
{
    if (front == -1)
        printf("\nUnderflow");
    else
    {
        printf("%d is deleted", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
        printf("\nUnderflow");
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d  ", queue[i]);
        }
    }
}