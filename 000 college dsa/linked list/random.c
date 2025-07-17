#include <stdio.h>

int checkasc(int arr[] , int n)
{
    for(int i = 1 ; i < n ;i++)
    {
        if(arr[i-1] > arr[i])
        {
            return 0;
        }
    }
    return 1;
}

void printarr(int arr[] , int n)
{
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d" , arr[i]);
    }
    printf("\n");
    
}

int checkmins(int temparr[] , int n , int min , int done)
{
    if(done == 1)
    {
        return 0;
    }
    int arr[n];
    for(int i = 0 ; i< n ; i++)
    {
        arr[i] = temparr[i];
    }
    
    printf("\n");
    printarr(arr , n);
    printf("->%d\n" , checkasc(arr , n));
   
    printf("is asc?%d\n" , checkasc(arr , n) == 1);
    if(checkasc(arr , n) == 1)
    {
        printf("%d" , checkasc(arr , n) == 1);
        printf("%d\n" , min);
        return 0;
    }

    else
    {
        for(int i = 1; i < n ; i++)
        {
            // printf("%d , %d , %d \n" , arr[i-1] , arr[i] ,min);
            if(arr[i-1] > arr[i])
            {
                if(arr[i-1] + arr[i] <= min)
                {
                    int temp = arr[i-1];
                    arr[i-1] = arr[i];
                    arr[i] = temp;
                    checkmins(arr , n , min , 0);
                }
            }
        }
        checkmins(arr , n , min+1 , 0);
    }
}

int main() {
	// your code goes here
	int n = 1;
	// scanf("%d" , &n);
	
	for(int i = 0 ; i < n ; i++)
	{
	    int g = 4;
	    // scanf("%d" , &g);
	    int arr[] = {2, 3 , 1 ,4};
	    // for(int m = 0 ; m < g ; m++)
	    // {
	    //     scanf("%d" , &arr[m]);
	    // }
	    int temp[] = {1 , 2 , 3 , 4};
	    
        checkmins(arr , g , 0, 0);
	}
}

