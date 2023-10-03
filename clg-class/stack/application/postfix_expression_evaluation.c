#include <stdio.h>
#include <ctype.h>

#define Max 50

int stack[Max], top = -1;

void push(char);
char pop();
int precedence(char);

int main()
{
    char str[20], x;

    printf("Postfix Expression: ");
    gets(str);

    

}

int precedence(char symbol)
{
    if (symbol == '^')
    {
        return 3;
    }
    else if (symbol == '*' || symbol == '/')
    {
        return 2;
    }
    else if (symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char item)
{
    stack[++top] = item;
}

char pop()
{
    return stack[top--];
}
