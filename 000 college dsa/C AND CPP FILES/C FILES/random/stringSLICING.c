#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void slice(char* str , int a , int b , int c)
{
    
    for(int i = a ; i<b ; i+= c)
    {
        printf("%c" , str[i]);
    }
}

int main(){

    char str[200] = "This is VIT";

    // int length = sizeof(str);
    // int length = strlen(str);
    // printf("%d" , length);

    // char* substring = strtok(str , "i");
    // printf("%d" , length);

    slice(str ,0 , sizeof(str) , 1);

    strcat(str , "HELlo Person , i aM computEr");

    printf("\n%s" ,str);

    return 0;

}