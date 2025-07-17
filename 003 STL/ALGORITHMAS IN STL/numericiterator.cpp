#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    vector<int> v1 , v2;
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(12);
    v1.push_back(1);
    v1.push_back(31);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);

    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);

    partial_sum(v1.begin() , v1.end() , v2.begin());

    for (int i = 0; i < v1.size(); i++)
    {
        cout<< i <<"--->"<<v2[i]<<endl;
    }


    return 0;
}