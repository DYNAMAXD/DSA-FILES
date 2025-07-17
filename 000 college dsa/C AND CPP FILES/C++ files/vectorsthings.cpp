#include <iostream>
#include <vector>
using namespace std;


int main()
{
vector<int> v1;

for (int i = 0; i < 5; i++)
{
// {   int j;
//     cin>> j;
    v1.push_back(i*8);
}

for (int i = 0; i < 5; i++)
{
    cout<< v1[i]<<endl;
}
cout<< endl;
cout << v1.size()<<endl;

// v1.resize(0);

cout<< v1.empty()<<endl;

}
