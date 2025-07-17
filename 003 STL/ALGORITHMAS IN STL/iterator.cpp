#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void square(int num )
{
    cout<<num*num<<"  ";
}

bool checkwhat(int num)
{
    if(num %3 ==0)
    {
        return true;
    }
    return false;
}

bool check(int num)
{
    if (num%2 ==0)
    {
        return true;
    }
    return false;
}
int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);     

    for(int a : vec)
    {
        cout<<a<<"  ";
    }
    cout<<endl;

    auto it = partition(vec.begin() , vec.end() , check);

    for(int a : vec)
    {
        cout<<a<<"  ";
    }
    cout<<endl;


    // cout << "before rotaion"<<endl;
    // for(int a : vec)
    // {
    //     cout<<a<<"  ";
    // }
    // cout<<endl;
    // rotate(vec.begin(),  vec.begin()+2 , vec.end());
    // // rotate(vec.begin(),  vec.end()-1, vec.end());
    // cout << "after rotaion"<<endl;


    // for_each(vec.begin() , vec.end() , square);

    // auto it = find_if(vec.begin() , vec.end() , checkwhat);
    // cout<<*it<<endl;

    // int count = count_if(vec.begin() , vec.end() , checkwhat);
    // cout<<count;
    return 0;
}