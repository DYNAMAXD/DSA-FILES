#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    

    list<int> ::iterator it = l.begin(  );

    // while(it!= l.end())
    // {
    //     cout<< *it<<"  ";
    //     it++;
    // }
    // cout<<endl;

    l.push_front(11);
    l.push_front(22);
    l.push_front(33);

    it = l.begin();
    while(it!= l.end())
    {
        cout<< *it<<"  ";
        it++;
    }
    cout<<endl;

    // cout<<l.front()<<"  " << l.back() << endl;  

    l.pop_front();

    it = l.begin();
    while(it!= l.end())
    {
        cout<< *it<<"  ";
        it++;
    }
    cout<<endl;

    l.pop_back();

    it = l.begin();
    while(it!= l.end())
    {
        cout<< *it<<"  ";
        it++;
    }
    cout<<endl;
}