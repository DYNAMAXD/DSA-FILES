#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isPossible(vector<int> &arr, int k , int a)
    {
        //arr--> the actual array
        //k  --> no of students
        //a  --> trying this number

        int j = 0;//starting from the beginning of the array    
        for(int i = 0 ; i < k ;i++)//-->checking for each student
        {
            int sum = 0;
            while(sum < a && j < arr.size())
            {
                if(sum+arr[j] <= a)
                {
                    sum+=arr[j]; 
                    j++;
                }
                else{
                    break;
                }
            }
        }
        if(j == arr.size())
        {
            return true;
        }
        return false;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(arr.size() < k) return -1;
        
        if(k == 1){
            int ans = 0;
            for(int i = 0 ; i < arr.size();i++)
            {
                ans+=arr[i];
            }
            return ans;
        }
        int max = 0;
        for(int i = 0 ; i < arr.size();i++)
        {
            max+=arr[i];
        }
        int ans = -1;
        int s = 0;
        int e = max;
        int mid;
        while(s <= e)
        {
            mid = s + (e-s)/2;
            cout<<"trying this number "<<s<<"-->"<<mid<<"<--"<<e<<"   ans is "<<ans<<endl;
            if(isPossible(arr , k , mid))
            {
                ans = mid;
                e = mid - 1 ;
            }
            else{
                s = mid + 1;
            }
            
        }
        return ans;
    }
};


int main() {
    vector<int> arr = {7, 14, 16, 18, 21, 22, 29, 34, 37, 41, 49, 62, 64, 74, 74, 77, 79, 88, 89, 99};
    int k = 6;

    Solution sol;
    int result = sol.findPages(arr, k);
    cout << "Minimum maximum pages = " << result << endl;

    return 0;
}
