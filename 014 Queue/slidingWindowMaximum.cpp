#include<bits/stdc++.h>
using namespace std;

void printMaxInWindow(vector<int>& nums , int k)
{
    deque<int> d;
    int i = 0;
    int j = 0;
    vector<int> ans;

    // nums = {1,2,3,4,5,6,7,8}
    //k = 3
    //windows
    // nums = [1,2,3],4,5,6,7,8 -->3
    // nums = 1,[2,3,4],5,6,7,8 -->4
    // nums = 1,2,[3,4,5],6,7,8 -->5
    // nums = 1,2,3,[4,5,6],7,8 -->6
    // nums = 1,2,3,4,[5,6,7],8 -->7
    // nums = 1,2,3,4,5,[6,7,8] -->8


    // we will store the indices in the d


    //calculating the for the first window
    
    
    while(j < k)
    { 
        
        while(!d.empty() && nums[d.front()] <= nums[j])
        {
            d.pop_front();
        }
        
        d.push_back(j); 
        j++;
        
    }  
    ans.push_back(nums[d.front()]);
     
    while(j < nums.size())
    { 
        //if the there are elements which are not the part of the window

        while(!d.empty() && d.front() <=  i)
        {
            d.pop_front();
        }

        //doing the same thing as we did for the inserting step 
        int intAtJ = nums[j]; 
        
        
        //checking if while the element at the front index is lesser than the current one
        //i was doing it very wrong , we do not check at the front , we check elemnt at the back
        //then we pop from the back
        while(!d.empty() && nums[d.back()] < intAtJ)
        {
            d.pop_back();
        }
        //at last we did insert the current element 
        d.push_back(j);
        //yehi answer bhi hoga iss window ka
        ans.push_back(nums[d.front()]);
        j++;
        i++;
         
        // for(auto it : d)
        // {
        //     cout<<it<<"  ";
        // } 
    }


    for(auto i : ans)
    {
        cout<<i<<"  ";
    }
}

 
int main(){
    vector<int>nums = {1,3,1,2,0,5};
    int k =3;

    printMaxInWindow(nums , k); 
}