#include<stdio.h>
#include<string.h>
#include<ctype.h>
void lowercase(char* string)
{
    
    for (int j = 0; j < strlen(string); j++)
    {
        int ascii = string[j];
        if (ascii != 32){
            (ascii > 90)?printf("%c" , string[j]):printf("%c" ,ascii + 32);
        }
        else{
            printf(" ");
        }
    }
}

void uppercase(char* string)
{
    for (int j = 0; j < strlen(string); j++)
    {
        int ascii = string[j];
        if (ascii != 32){
        (ascii <= 90)?printf("%c" , string[j]):printf("%c" ,ascii - 32);
        }
        else{
        printf(" ");
        }
    }
}

int main(){

    char string[] = "ThIs Is CAPITAL  tHiS is small";

    if (isupper(string[0]))
    {
        uppercase(string);
    }
    else{
        lowercase(string);
    }
    printf("\n");
    return 0;

}