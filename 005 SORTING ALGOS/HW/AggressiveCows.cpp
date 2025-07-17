#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    
    //for this part , check the video of TAKE YOU FORWARD 
    //hes explained it pretty well

    bool isPossible(vector<int> &stalls , int k , int target)
    {
        int noOfCows = 1;//we place the first cow on the first stall automatically
        int lastLocationOfCow = 0;//and then the last location of the cow as 0
        
        for(int i = 1 ; i< stalls.size() ; i++)//an iterator for the whole array
        {
            //just checking if the distance between the current stall
            // from the last location of the cow is greater than the target
            // as simple as that
            if(stalls[i] - stalls[lastLocationOfCow] >= target)
            {
                //if yes then we would increase the number of cows placed
                //and make that location as the last location of cow
                noOfCows++;
                lastLocationOfCow = i;
            }
            //just the base condition as if the no of cows is equal to the 
            //target cows i.e "k" then we directly return true 
            if(noOfCows == k)return true;
        }
        //if we have not triggered the above if statement then we have failed
        //hence return false
        return false;
    }
    //here is just the binary search , 
    // from 0 to max value that could be in between cows
    //basically we have to minimise the maximum distance between the stalls
    int aggressiveCows(vector<int> &stalls, int k) {
        
        // Write your code here
        sort(stalls.begin() , stalls.end());
        
        int s = 0;
        int e = stalls[(stalls.size())-1] - stalls[0];
        int ans = 0;
        
        while(s <= e)
        {
            int mid = s + (e-s)/2;
            // cout<<"this is the mid"<<"-->"<<mid<<endl;
            if(isPossible(stalls , k  , mid ))
            {
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }
        
        return ans;
        
    }
};

int main(){
    
    return 0;
}