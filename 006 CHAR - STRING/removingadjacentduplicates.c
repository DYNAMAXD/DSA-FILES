#include<stdio.h>
#include<string.h>
void removeDuplicates(char s[] , int size) {
    
    int n = size;
    int temp[n];
    int p = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(p==0)
        {
            temp[p] = s[i];
            p++;
        }
        else if(temp[p-1] == s[i])
        {
            p--;
        }
        else if(temp[p-1] != s[i])
        {
            temp[p] = s[i];
            p++;
        }
    }
    for(int i = 0 ; i < p ; i++)
    {
        printf("%c" , temp[i]);
    }
    return temp;
}


int main()
{
    int n = 10;
    char arr[10] = "ssddaf";

    removeDuplicates(arr , n);
}