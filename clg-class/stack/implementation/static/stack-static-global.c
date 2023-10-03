#include <stdio.h>
#include <process.h>
#include <conio.h>

#define Max 50

int stack[Max], top = -1;

void push();
void pop();
void peak();
void display();

int main()
{
    int ch;
    while (1)
    {
        printf("1. push");
        printf("\n2. pop");
        printf("\n3. peak");
        printf("\n4. diplay");
        printf("\n5. End program");
        printf("\n\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peak();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            break;
        }
        defaut:
        {
            printf("\nwrong choice\n");
        }
        }
    }

    return 0;
}
void push()
{
    int data;
    if (top == Max - 1)
    {
        printf("\nstack full\n");
    }
    else
    {
        printf("\nEnter element to be push: ");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nstack is empty\n");
    }
    else
    {
        printf("\npoped element: %d", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nstack is empty\n");
    }
    else
    {
        printf("\nElements: \n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
        printf("\n");
    }
}

void peak()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d", stack[top]);
    }
}