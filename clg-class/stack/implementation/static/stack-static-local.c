#include <stdio.h>
#include <process.h>
#include <conio.h>

#define Max 50

int push(int stack[Max], int top);
int pop(int stack[Max], int top);
int peak(int stack[Max], int top);
int display(int stack[Max], int top);

int main()
{
    int stack[Max], top;
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
            top = push(stack, top);
            break;

        case 2:
            top = pop(stack, top);
            break;

        case 3:
            top = peak(stack, top);
            break;

        case 4:
            top = display(stack, top);
            break;

        case 5:
            break;

        defaut:
            printf("\nwrong choice\n");
        }
    }

    return 0;
}
int push(int stack[Max], int top)
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

    return top;
}

int pop(int stack[Max], int top)
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

    return top;
}

int display(int stack[Max], int top)
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

    return top;
}

int peak(int stack[Max], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d", stack[top]);
    }

    return top;
}