#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int stack1[SIZE];
int stack2[SIZE];
int top1 = -1;
int top2 = -1;

void push(int stack[], int *top, int item)
{
    if (*top == SIZE - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    stack[++(*top)] = item;
}

int pop(int stack[], int *top)
{
    if (*top == -1)
    {
        printf("Stack underflow!\n");
        return -1; // Return a sentinel value for an empty stack
    }
    return stack[(*top)--];
}

void enqueue()
{
    int item;

    printf("Enter the element: ");
    scanf("%d", &item);

    push(stack1, &top1, item);
}

int dequeue()
{
    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty!\n");
        return -1; // Return a sentinel value for an empty queue
    }

    if (top2 == -1)
    {
        while (top1 != -1)
        {
            push(stack2, &top2, pop(stack1, &top1));
        }
    }

    int dequeuedItem = pop(stack2, &top2);

    while (top2 != -1)
    {
        push(stack1, &top1, pop(stack2, &top2));
    }

    return dequeuedItem;
}

void display()
{
    int i;
    printf("Queue: ");
    for (i = top1; i >= 0; i--)
    {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}

int main()
{
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
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
