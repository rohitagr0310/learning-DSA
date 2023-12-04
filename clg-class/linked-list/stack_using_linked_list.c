#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} stack;

stack *top, *temp;

void pop()
{
    if (top == NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        temp = top;
        top = top->next;
        printf("\nElement deleted: %d", temp->data);
        free(temp);
        temp = NULL;
    }
}

void create_node()
{
    temp = (stack *)malloc(sizeof(stack));
    printf("\nEnter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
}

void push()
{
    create_node();
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}

void display()
{
    temp = top;
    if (top == NULL)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. push\n");
        printf("2. pop\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}