#include<stdio.h>
#include<ctype.h>
char stack[1000];
int top = 0;

int size(char str[])
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    return count;
}

int prec(char arg)
{
    if(arg == '+' || arg == '-')
    {
        return 1;
    }
    if(arg == '*' || arg == '/')
    {
        return 2;
    }
}

int isOP(char arg)
{
    return !isdigit(arg);
}

char stacktop()
{
    return stack[top-1];
}

char stackpop()
{
    return stack[--top];
}

void stackpush(char arg)
{
    stack[top++] = arg;
}

void stackshow()
{
    for(int i = 0 ; i < top ; i++)
    {
        printf("%c" , stack[i]);
    }
}

void topostfix(char str[])
{
    int n = size(str);
    char postfix[n];
    int j = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(isOP(str[i]) == 0)
        {
            postfix[j] = str[i];
            j++;
        }

        else{
            if(prec(str[i]) > prec(stacktop()) || top == 0)
            {
                stack[top] = str[i];
                top++;
            }
            else
            {
                while(prec(str[i]) <= prec(stacktop()) && top > 0)
                {
                    postfix[j] = stackpop();
                    j++;
                }
                stackpush(str[i]);
            }
        }
    }
    while(top >= 0)
    {
        postfix[j++] = stackpop();
    }

    for(int i = 0 ; i < j ; i++)
    {
        printf("%c" , postfix[i]);
    }
}
int main()
{
    char str[] = "a*b/c+8";
    topostfix(str);
}