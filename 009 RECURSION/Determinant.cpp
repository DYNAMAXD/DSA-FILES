#include<iostream>
#include<cmath>
using namespace std;

int detr(int **matrix ,int n)
{
    if(n == 1)
    {
        return matrix[0][0];
    }
    if(n == 2)
    {
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    }
    int ans = 0;
    for(int a = 0 ; a < n ;a++)
    {
        int **helper = new int*[n-1];
        int hcount = 0;
        for(int i = 1 ; i < n ;i++)
        {
            int *row = new int[n-1];
            int count = 0;
            for(int j = 0 ; j < n ;j++)
            {
                if(j != a)
                {
                    row[count++] = matrix[i][j];
                }
            }
            helper[hcount++] = row;    
        }
        ans += (pow(-1 , a))* matrix[0][a] * detr(helper ,n-1);
        for(int i = 1 ; i < n-1 ;i++)
        {
            delete[] helper[i];   
        }
        
    }
    


    return ans;
}
int main()
{
    
    int n = 5;
    int **matr = new int*[n];
    for(int i = 0 ; i < n ;i++)
    {
        int *row = new int[n];
        for(int j = 0 ; j < n ; j++)
        {
            row[j]= 1;
        }
        matr[i] = row;
    }
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    // cout<<"the determinant of 2x2 is"<<detr(matrix2 , 2)<<endl;
    cout<<"the determinant of 3x3 is "<<detr(matr , n)<<endl;
    // cout<<"the determinant of 4x4 is"<<detr(matrix4 , 4)<<endl;

}