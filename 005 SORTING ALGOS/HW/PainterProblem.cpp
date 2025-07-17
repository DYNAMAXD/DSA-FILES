
//partition the vector arr into "k" parts such that 
//the contiguious sum is minimum 



#include<iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    
    bool isPossible(vector<int>& arr, int k , int target)
    {
        int i = 0;
        for(int g = 0 ; g < k ; g++)
        {
            long long sum = 0;
            while(sum <= target && i < arr.size())
            {
                if(arr[i] > target) return false;
                
                if(sum + arr[i] <= target )
                {
                    sum += arr[i];
                    i++;
                }
                else
                {
                    break;
                }
                
            }
        }
        if(i == arr.size())
        {
            return true;
        }
        
        return false;
    }
    
    int minTime(vector<int>& arr, int k) {
        // code here
        long long s = 0;
        long long e = 0;
        long long ans = 0;
        
        for(auto i : arr) 
        {
            e+=i;
        }
        
        //1. Binary search on the range from the minimum time , i.e 0
        // to the maximum time , which could be the sum of all the elements of the array 
        while(s <= e)
        {
            long long mid = s +(e - s) / 2;
            //2. The Binary Search is driven by this "isPossible" function's outputs
            // "isPossible" gives true if we can 
            //partition the array "arr" in "k" parts each sum <= "mid"
            //this is cleverly done in it's definiton
            //this happens because the range is perfectly divided into 
            //possible answer and not possible answer


            // NP NP NP NP NP NP P P P P P P P P P P P P 
            // ^                   ^                   ^
            // s = 0               mid                 e = sum of all elements of arr
            //the mid element goes into this range

            // and this mid is then minimised as done in the Binary Search part
             if(isPossible(arr , k , mid))
            {
                ans =  mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};


int main(){
    
    return 0;
}


