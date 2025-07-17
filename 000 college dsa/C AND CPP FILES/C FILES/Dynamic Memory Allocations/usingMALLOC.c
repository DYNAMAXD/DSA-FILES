#include<stdio.h>

int main(){
    char string[] = "012345678";
    char* ptr = &string[8];
    for (int i = 0; i < 8; i++)
    {
        ptr--;
        printf("%c" , *ptr);
    }
    
    return 0;
}