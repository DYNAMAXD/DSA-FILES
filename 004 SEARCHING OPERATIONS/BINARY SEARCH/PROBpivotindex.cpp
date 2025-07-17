#include<iostream>
#include<vector>

using namespace std;

vector<int> arr = {1 , 3};
int target = 1;

int pivotindex(vector<int>& nums, int target) {
    // just taking out the pivot index
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (s == e) {
            return s;
        }
        if (mid + 1 < nums.size() && nums[mid] > nums[mid + 1]) {
            // cout<<"pivot = "<<  mid;
            return mid;
        } else if (mid - 1 >= 0 && nums[mid - 1] > nums[mid]) {
            // cout<<"pivot = "<<  mid-1;
            return mid - 1;
        }

        if (nums[mid] > nums[0]) {
            // go right
            s = mid + 1;
        } else {
            // go left
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    // return -1;/
}

int binary(vector<int>& nums, int target, int s, int e) {
    int mid = s + (e - s) / 2;

    if (s ==e)
    {
        return s;
    }
    while (s <= e) {
        if (nums[mid] < target) {
            // go right
            s = mid + 1;
        } else if (nums[mid] > target) {
            // go left
            e = mid - 1;
        } else if (nums[mid] == target) {
            return mid;
        }
        // cout<<mid;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int final(vector<int>& nums, int target)
{
        int p = pivotindex(nums, target);
        int n = nums.size();
        // line a --> index: 0 to p
        // line b --> index: p+1 to nums.size()

        cout<<p << "  " << n;

        // checking if target is in line a/
        if (p == n)
        {
            return p;
        }
        if (target >= nums[0] && target <= nums[p]) {
            // binary search
            return binary(nums, target, 0, p);
        } else {
            // binary search
            return binary(nums, target, p + 1, n - 1);
        }
        return -1;

}

int main(){
    int ans = final(arr , target);
    cout<<ans;
    // return ;
};