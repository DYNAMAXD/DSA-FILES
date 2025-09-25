#include<bits/stdc++.h>
 
using namespace std;
 
class ss {
public:
    unordered_map<string , int> mapp;
    ss(int rows) {
        //no need as i am using unordered_map for this , so no need to initialise the values
    }
   
    void setCell(string cell, int value) {
        this->mapp[cell] = value;
    }
   
    void resetCell(string cell) {
        this->mapp[cell] = 0;
    }
 
    int getNumber(string Addr)
    {
        return mapp[Addr];
    }
   
    void seeMapp()
    {
        for(auto i : mapp)
        {
            cout<<i.first<<"  "<<i.second<<endl;
        }
    }
    int getValue(string formula) {
        int i = 1;
 
        // first part of the string from 1 to s1 index
        //second part of the string from s1+2 to s2 <<-- this would be the end of the string always , so essentially we just need int s1
        int s1 = 0 ;
        int s2 = 0;
        while(i < formula.size() && formula[i] != '+' )
        {
            i++;
            s1++;
        }
        string st1 = formula.substr(1 , s1);
        string st2 = formula.substr(s1 + 2 , formula.size()-s1-2);
       
        try{
            s1 = stoi(st1);
        }
        catch(const exception& e)
        {
            s1 = this->getNumber(st1);
        }
       
        try{
            s2 = stoi(st2);
        }
        catch(const exception& e)
        {
            s2 = this->getNumber(st2);
        }
        cout<<"s1 , s2-->"<<s1<<" "<<s2<<endl;
        return s1 + s2;
    }
};
 
 
int main()
{
    ss a(100);
    a.setCell("B2" , 10);
    a.setCell("C4" , 43);
    a.seeMapp();
    cout<<a.getValue("=B2+500")<<endl;
    cout<<a.getValue("=100+C4")<<endl;
    cout<<a.getValue("=B2+C4")<<endl;
 
}