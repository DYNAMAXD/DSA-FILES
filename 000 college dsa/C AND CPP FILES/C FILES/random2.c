#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{


    
// struct str1
// {
//     int val1;
//     char val2[100];
//     float val5[20];
//     struct str2 
//     {
//         int val3;
//         char val4[100];
//     }str2;
// };

    // struct str1 s1[5];
    
    // for (int i = 0; i < 5; i++)
    // {
    //     s1[i].val1 = 5*i;
    //     s1[i].str2.val3 = i*i;
    //     strcpy(s1[i].str2.val4 , "huh , nice work boyo");
    //     char t_var[100];
    //     scanf(" %[^\n]s" , &t_var); // notice the space given 
    //     strcpy(s1[i].val2 , t_var);
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d , %d\n" ,s1[i].val1 , s1[i].str2.val3);
    //     printf("%s %s\n" ,s1[i].val2 , s1[i].str2.val4 );
    // }
    

// struct str1* ptr;

// ptr = (struct str1*)malloc(sizeof(struct str1)*3);

// ptr->val1 = 50;
// strcpy(ptr->val2 , "what again?");

// ptr->str2ptr = (struct str2*)malloc(sizeof(struct str2)*3);
// ptr->str2ptr->val3 = 100;
// strcpy(ptr->str2ptr->val4 , "huh , nested structures accessing with DMA pointers , nice");

// printf("%d , %d\n" , ptr->val1 , ptr->str2ptr->val3);
// printf("%s\n%s" , ptr->val2 , ptr->str2ptr->val4);









// struct str1 s1;
// s1.val1 = 100;
// strcpy(s1.val2, "what");

// s1.str2.val3 = 500;
// strcpy(s1.str2.val4 , "oh that is what");

// printf("%s , %s" , s1.val2 , s1.str2.val4);

















// ptrm -> val2 = 23;
// printf("%d\n" , ptrm -> val2);

// (ptrm+1) ->val1 = 50;
// printf("%d \n" , (ptrm+1)->val1);
// struct str2
// {
//     int val3;
// };

// struct str1
// {
// int val1 ; 
// int val2;
// struct str2* str2;
// // };
// struct str1 * ptrm;
// struct str2 * ptrm2;
// ptrm = (struct str1*)malloc(sizeof(struct str1)*3);
// ptrm->str2 =(struct str2*)malloc(sizeof(struct str2)*5);

// ptrm->str2->val3 = 50;

// ptrm -> val1 = 10;
// printf("%d \n" , ptrm->val1);
// printf("%d \n" , ptrm->str2->val3);

// (ptrm+2) -> val1 = 100;
// printf("%d \n" , (ptrm+2)->val1);













// int * p_arr[10];
// for (int i = 0; i < 10; i++)
// {
    
//     scanf("%p" , p_arr[i])
// }


    // int * ptr;
    // ptr = (int*)malloc(sizeof(int)*10);

    // for(int i = 0 ; i < 10; i++ )
    // {
    //     scanf("%d" , (ptr + i));
    // }

    // for(int i = 0 ; i < 10; i++ )
    // {
    //     printf("%d" , *(ptr + i));
    // }

// struct str1
// {
//     int val1;
//     int val2;
//     // struct str2
//     // {
//     //     int val3; 
//     // };
// };
    // char a[100];
    // scanf("%[^\n]s" , a);
    // char b[100] ;
    // int len = strlen(a);
    // printf("%d\n" , strlen(a));

    // for (int i = 0 ; i < len ; i++ )
    // {
    //     // printf("%c" , a[i]); 
    //     int g = a[i];
    //     if ((g >= 65) & (g >=92))
    //     {
    //         b[i] = a[i];
    //     }
    //     else
    //     {
    //         b[i] = *"$";
    //     }
    // }
    
    // printf("%s\n" , a);
    // printf("%s" , b);

    // char mtx[x][y];

    // struct str1* ptr ;
    // ptr -> val1 = 12;
    // ptr -> val2 = 23;
    // // ptr -> str2 -> val3 = 20;

    // printf("%d , %d" , (ptr)->val1 , (ptr)->val2);








    // int n , *ptr;

    // printf("enter the number of values");
    // scanf("%d" , &n);

    // ptr = (int*)malloc(sizeof(int)*n);


    // for(int i = 0 ; i < n ; i++)
    // {
    //     scanf("%d" , (ptr + i));
    // }


    // for(int i = 0 ; i < n ; i++)
    // {
    //     printf("%d" ,*(ptr + i));
    // }


















    // struct str1 *ptr = (struct str1*) malloc(sizeof(struct str1) * 2);
    // for(int i = 0; i < 2 ; i++)
    // {
    //     scanf("%d %d" , ptr->val1 , (ptr)->val2);
    //     ptr+=i;
    // }
    // for(int i = 0; i < 2 ; i++)
    // {
    //     printf("%d %d" , (ptr)->val1 , (ptr)->val2);
    //     ptr+=i;
    // }


    // // char a[] = "asdf asdf as";
    // char a[10];
    // scanf("%[^\n]s" , a);

// int n;

    // printf("%s" ,a);
    // int n;
    // scanf("%d" , &n);
    // //let say we need 3 , so 3 rows and 4 columns
    // int si=  sizeof(a);
    // --si; // removing the end of string charater 
                              
    // for (int i = n-1 ; i < si ; i = i+4) // here +4 comes from the question which says 3x4 matrix
    // {
    //     int g = a[i];
    //     if ((g >= 65) & (g >=92))
    //     {
    //         printf("%c" , a[i]);
    //     }
    //     else
    //     {
    //         printf("$");
    //     }
    // }

    // 65 -> 92 , 97 -> 122




// void bsort(int arr[] , int n)
// {
//     for(int i = 0 ; i < n-1 ; i++)
//     {
//         if( arr[i] > arr[i+1])
//         {
//             int j;
//             j = arr[i+1];
//             arr[i+1] = arr[i];
//             arr[i] = j;
//             bsort(arr , n);
//         }
//     }
    
// }
//     int arr[] = {0,9,5,51};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bsort(arr , n);
//     for(int i = 0 ; i < n ; i++)
//     {
//         printf("%d" , arr[i]);
//     }
// // {
//     int arr[] = {1,2,3,4,5,1,2,2};

//     dup(arr ,n);

    // int n;
    // scanf("%d\n" , &n);
    // int arr[n];

    // for (int i = 0 ; i<n ; i++)
    // {
    //     scanf("%d" , &arr[i]);
    // }
    // for (int i = 0 ; i<n ; i++)
    // {
    //     printf("%d" , arr[i]*2);
    // }
    // // char a[100];
    // strcpy(a , "trfyguhij");
    // printf("%s" , a);
    // return 0;


// void dup(int arr[] , int n)
// {
//     int count = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//         for (int j = 0 ; j < n ; j++)
//         {
//             if ((i != j) & (arr[i] == arr[j]))
//             {
//                 printf("sup %d , %d\n" , i , j);
//                 count +=1;
//             }
//         }
//     }
//     printf("%d" , count/2);
}