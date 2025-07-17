#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    // string st = "23:21";
    const char* st = "23:21";

    int i1 , i2;

    sscanf(st , "%d:%d"  ,&i1 , &i2);
    cout<<i1<<" "<<i2<<endl;
    

    //now how to use it as string
    string dt = "02-07-2004";

    int date , month , year;

    sscanf(dt.c_str(), "%d-%d-%d" , &date , &month , &year);
    //dont forget .c_str() , is used for strings
    //and how the &date &month &year are passed 

    cout<<"date ->"<<date<<"  month ->"<<month<<"  year ->"<<year<<endl;

    //minimum time difference - lc 539

    return 0;
}