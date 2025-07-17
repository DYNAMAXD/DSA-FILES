#include<stdio.h>
#include<string.h>
int pall(char* string)
{
    int len = strlen(string);
    char* pr = string;
    char* revpr = (pr + len-1);

    for (int i = 0; i < len; i++)
    {
        if (*pr != *revpr)
        {
            return 0;
        }
        pr+=1;
        revpr-=1;
        // printf("%c  " , *pr);
        // printf("%c\n" , *revpr);
    }
    return 1;
    
}

int main(){

    char str[] = "torsot";
    gets(str);
    if (pall(str))
    {
        printf("This is a pallindrome");
    }
    else
    {
        printf("This not is a pallindrome");
        
    }
    return 0;

}