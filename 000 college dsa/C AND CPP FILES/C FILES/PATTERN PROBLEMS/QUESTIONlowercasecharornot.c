#include<stdio.h>

int main(){
    char ch;
    printf("Enter the char\n");
    scanf("%c" , &ch);
    int asci = ("%d" , ch);
    //a -> 97
    //z -> 122
    if ((ch > 97) && (ch < 122))
    {
        printf("it is a lowercase character");
    }
    else{
        printf("it is not a lowercase charater");
    }
}