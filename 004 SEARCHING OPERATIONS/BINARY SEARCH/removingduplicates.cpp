#include<iostream>
#include<vector>
using namespace std;

void swap(int& a , int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}


void print(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout<<vec[i]<<"  ";
	}
	cout<<endl;
	
}


void removedup(vector<int> &v)
{
    int i = 0;
    int j = 1;

    while(j < v.size())
    {
        if (v[i] == v[j])
        {
            j++;
        }
        else
        {
            print(v);
            i++;
            v[i] = v[j];
            j++;
            print(v);
        }
        
    }
}

int main(){
    vector<int> v = {0,1,1,1,2,3,3,3,4,4,5,5,6,6};
    print(v);
    removedup(v);
    print(v);
    return 0;
}