#include <stdio.h>
#include <string.h>

#define Max 50

char stack[Max];
int top = -1;

void push(char);
char pop();

int main()
{
    int flag = 1;
    char str[50], t;

    printf("Enter the string to check balance brackets: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
        }
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (top == -1)
            {
                flag == 0;
                break;
            }
            else
            {
                t = pop();
                if (str[i] == ')' && (t == '[' || t == '{'))
                {
                    flag = 0;
                    break;
                }
                else if (str[i] == ']' && (t == '(' || t == '{'))
                {
                    flag = 0;
                    break;
                }
                else if (str[i] == '}' && (t == '[' || t == '('))
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (top >= 0)
    {
        flag = 0;
    }

    if (flag == 0)
    {
        printf("Not Balanced");
    }
    else
    {
        printf("Balanced");
    }

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
