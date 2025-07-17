#include<stdio.h>

int stack[1000];
int top = 0;

int size(char str[])
{
    int count = 0 ; 
    while(str[count] != '\0')
    {count++;}
    return count;
}

void stackpush(int a)
{
    stack[top] = a;
    top++;
}

int stackpop()
{
    if(top > 0)
    {
        top--;
    }
    else
    {
        return -1;
    }
    int ans = stack[top];
    return ans;
}

void stackshow()
{
    for(int i = 0 ; i < top ; i++)
    {
        printf("%d" , stack[i]);
    }
    printf("\n");
}

void postfixeval(char str[])
{
    int len = size(str);
    // printf("%d" , len);
    for(int i = 0 ; i < len ; i++)
    {
        if(str[i] == '+')
        {
            int arg1 = stackpop();
            int arg2 = stackpop();
            int ans = arg1 + arg2;
            stackpush(ans);
        }
        else if(str[i] == '-')
        {
            int arg1 = stackpop();
            int arg2 = stackpop();
            int ans = arg2 - arg1;
            stackpush(ans);
        }
        else if(str[i] == '*')
        {
            int arg1 = stackpop();
            int arg2 = stackpop();
            int ans = arg1 * arg2;
            stackpush(ans);
        }
        else if(str[i] == '/')
        {
            int arg1 = stackpop();
            int arg2 = stackpop();
            int ans = arg2 / arg1;
            stackpush(ans);

        }
        else{
            if(str[i] != ' ')
            {
            stackpush(str[i] - '0');
            }
        }
        printf("%d -->" , i);
        stackshow();
    }
}

int main()
{
    char str[1000] = "15+58*+";
    // scanf("%[^\n]s" , &str);
    // printf("%d" , stack[top-1]);
    postfixeval(str);
    printf("%d" , stack[0]);
}