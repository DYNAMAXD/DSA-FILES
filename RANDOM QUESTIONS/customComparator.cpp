#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool CustomComparator(string a , string b)
{
    return a.size() > b.size();
}

int main(){
    
    vector<string> names = {"Sujal" , "Aditya" , "BeeBasic" , "SleepTalker" , "Divyansh" , "Eivor" , "Dynamax"};

    cout<<"before sort:";
    for(auto i : names)
    {
        cout<<i<<" ";
    }
    sort(names.begin() , names.end() , CustomComparator);
    cout<<endl<<endl;
    cout<<"after sort:";
    for(auto i : names)
    {
        cout<<i<<" ";
    }

    
    return 0;
}