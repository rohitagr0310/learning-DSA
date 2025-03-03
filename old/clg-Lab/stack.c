#include <stdio.h>
#include <process.h>
#include <conio.h>

#define Max 5

int a[Max], top = -1;

void push();
void pop();
void display();

int main()
{
    int ch;
    printf("1. push");
    printf("\n2. pop");
    printf("\n3. diplay");
    printf("\n4. End program");
    while (1)
    {
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
            display();
            break;
        }
        case 4:
        {
            exit(0);
        }
        default:
        {
            printf("\nwrong choice");
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
        a[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\npoped element: %d", a[top]);
        top--;
    }
}

void display()
{
    int i;
    if (top >= 0)
    {
        printf("\nElements: \n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", a[i]);
        }
    }
    else
    {
        printf("\nstack is empty");
    }
}