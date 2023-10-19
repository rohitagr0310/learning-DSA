#include <stdio.h>
#include <string.h>

#define MAX 50

char stack[MAX];
int top = -1;

void push(char);
char pop();

int main()
{
    int i;
    char str[45];

    printf("Enter the String: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = pop();
    }

    str[i] = '\0';
    printf("Reversed String is: ");
    puts(str);

    return 0;
}

void push(char a)
{
    stack[++top] = a;
}

char pop()
{
    return stack[top--];
}