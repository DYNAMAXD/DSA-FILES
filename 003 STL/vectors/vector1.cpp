#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> nums = {1 , 12 , -5 , -6 , 50 ,3};
nums.insert(nums.begin() + 3  , 23);
for(int i = 0 ; i < nums.size() ; i ++)
{
    cout<<i << "-->" <<nums[i]<<endl;
}
return 0;
}