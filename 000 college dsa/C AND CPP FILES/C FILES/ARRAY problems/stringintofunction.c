// #include <stdio.h>
// #include <string.h>

// void function(char string[])
// {
//     printf("%s" , string);
// }

// int main()
// {
//     char str[255];
//     scanf("%[^\n]s" , &str);
//     function(str);
// }



#include<stdio.h>  
void main ()  
{  
    char s[30];  
    printf("Enter the string?\n");  
    gets(s);  
    printf("You entered %s", s);  
} 
