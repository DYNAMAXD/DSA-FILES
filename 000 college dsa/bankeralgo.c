#include<stdio.h>
#include<stdlib.h>
 
 
int main(){
int n , nr;

printf("enter the number of processes\n");
scanf("%d" , &n);


printf("enter the number of resources\n");
scanf("%d" , &nr);

int arr[n][nr];
int max[n][nr];
int need[n][nr];
int avail[nr];
int done[n];
int order[n];
int a = 0;
printf("enter the values\n");
for(int i = 0 ; i < n ;i++){
    for(int j = 0 ; j < nr ; j++){
        scanf("%d" , &arr[i][j]);
    }
}

printf("enter the max matrix\n");
for(int i = 0 ; i < n ;i++){
    for(int j = 0 ; j < nr ; j++){
      scanf("%d" , &max[i][j]);
    }
}

for(int i = 0 ; i < n ;i++){
    for(int j = 0 ; j < nr ; j++){
        need[i][j] = max[i][j] - arr[i][j];
    }
}

printf("enter the availible resources\n");
for(int i = 0 ; i < nr ; i++){
    scanf("%d" , &avail[i]);
}

for(int i = 0 ; i < n ;i++){
    for(int j = 0 ; j < nr ; j++){
        printf("%d " , need[i][j]);
    }
    printf("\n");
}

for(int i = 0 ; i < n ; i++)
{
done[i] = 0;
}

while(1){
    int flag = 0;

    for(int i = 0 ; i < n ; i++){
        int good = 1;
        if(done[i] == 0){
            for(int j = 0 ; j < nr ; j++){
                printf("checking %d row\n" , i);
                if(avail[j] < need[i][j]){
                    printf("rejecting %d row\n" , i);
                    good = 0;
                    break;
                }
            }
        }
        
        if(good && done[i] == 0)
        {
            printf("got this row as good %d\n" , i);
            for(int j = 0 ; j < nr ; j++){
                avail[j] += arr[i][j]  ; 
                }
            flag = 1;
            done[i] = 1;
            order[a] = i;
            a++; 
        }
    }

    if(!flag)
    {
        
        break;

    }
}
printf("this is the final output");
for(int i = 0 ; i < n ; i++)
{
    printf("%d " , order[i]);
}
return 0;
}


