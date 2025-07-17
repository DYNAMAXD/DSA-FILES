#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    for(int r = 1 ; r < n+1 ; r++)
    {
        for (int star = 0 ; star < r ; star++)
        {
            printf("*");
        }
        printf("\n");
    }
}