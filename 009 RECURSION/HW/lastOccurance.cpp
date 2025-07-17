//get the first and last occurance of a character in a char array

#include<iostream>
#include<vector>
using namespace std;

int getFirstPosition(char *arr ,int size, char target , int checking)
{
    if(checking  == size)return -1;
    if(arr[checking] == target) return checking;
    return getFirstPosition(arr , size , target , checking+1);
}
int getLastPosition(char *arr ,int size, char target , int checking)
{
    if(checking == size)return -1;
    if(arr[checking] == target) return max(checking , getLastPosition(arr , size , target , checking+1));
    return getLastPosition(arr , size , target , checking+1);
}

int main(){
    char arr[] = "asoidnasudyfuaisdfhbsdfondsjgmadyyafusnhjaerhbdasdfikujyfbueryiauropeskdfncxvgutytroijpwosakdljcxvd";
    int size = 100;
    char target = 'o';
    cout<<"the first occurance of "<<target<<" is at position-->"<<getFirstPosition(arr , size , target , 0)<<endl;
    cout<<"the last occurance of "<<target<<" is at position-->"<<getLastPosition(arr , size , target , 0)<<endl;

    return 0;
}