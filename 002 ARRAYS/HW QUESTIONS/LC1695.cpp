#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

//this was the most brute force method , has a time complexity of n^2
int maximumUniqueSubarrayM1(vector<int>& nums) {
    int s = 0;
    int e = 0;
    int ans = 0;
    int n = nums.size();
    unordered_map<int , int> mapp;
    while(s < n && e < n)
    {   
        if(mapp.find(nums[e]) == mapp.end())
        {
            ans = max(ans , accumulate(nums.begin()+s , nums.begin()+e+1 , 0));
            //because of thie ^ accumulte function , it was summing up all the possibly "n" elements again so n^2
            mapp[nums[e]] = 1;
            e++;
        }
        else
        {
            mapp.clear();
            s++;
            e = s;
        }
    }
    return ans;
}

//then i got tle on a very very large test case 
//asked gpt , then it told me about not to use the accumulate funciton 
//so i removed it , so that it just accumulates as incrementing the sum by just the nums[e]
//like this


int maximumUniqueSubarrayM2(vector<int>& nums) {
        int s = 0;
        int e = 0;
        int ans = 0;
        int n = nums.size();
        int temp = 0;
        unordered_map<int , int> mapp;
        while(s < n && e < n)
        {   
            if(mapp.find(nums[e]) == mapp.end())
            {
                ans += nums[e];
                //here just incrementing the values with the needed number not more
                mapp[nums[e]] = 1;
                e++;
            }
            else
            {
                //becase of that using this "temp" variable
                temp = max(temp , ans);
                ans = 0;
                mapp.clear();
                s++;
                e = s;
            }
        }

        return max(temp , ans);
    }

//again this code was giving TLE , for this i can not find out where to reduce the TC
//so again i asked gpt ,
//and the next thing that he told me was a new thing for me
//hes like whever we get a duplicacy , 
//we  increment the "s" that is correct
//and then get the sum making "e = s"
//essentially doing the same thing making the time complexity as n^2 
//he said that whenver we are going one step forward with "s"
//just remove that element from the ans ,
//and doing that , remove the entry from the hash map
//and so this is the final code for that

int maximumUniqueSubarray(vector<int>& nums) {
        int s = 0;
        int e = 0;
        int ans = 0;
        int n = nums.size();
        int temp = 0;
        unordered_map<int , int> mapp;
        while(s < n && e < n)
        {   
            if(mapp.find(nums[e]) == mapp.end())
            {
                ans += nums[e];
                //this is the first thing of just adding the new element
                mapp[nums[e]] = 1;
                //marking that element 
                e++;
                //incrementing the value
            }
            else
            { 
                temp = max(temp , ans);

                ans -= nums[s];
                //here is that optimisation , just remove that element from the front
                
                mapp.erase(nums[s]);
                //and instead of re-populating the whole mapp just remove that element from it
                
                s++; 
            }
        }

        return max(temp , ans);
    }
//this finally helped getting over that gigantic test case
int main(){
    vector<int>arr = {215,436,338,139,220,815,150,720,64,721,811,32,411,901,120,657,311,429,73,825,217,173,256,805,864,459,306,426,855,425,893,557,571,255,185,300,976,388,275,301,263,834,228,116,959,109,369,162,38,384,27,387,183,773,419,409,437,799,378,977,735,618,783,941,132,944,469,633,292,660,890,22,817,356,782,406,427,179,316,574,21,492,966,962,162,27,422,451,568,187,809,626,29,758,713,294,555,104,556,689,950,983,224,811,587,926,77,478,122,333,849,504,702,94,28,837,483,266,48,147,28,568,785,573,332,207,38,442,38,852,190,648,715,32,184,361,986,466,740,980,816,875,199,687,415,619,472,52,634,348,689,325,39,870,22,638,705,282,433,272,108,755,307,279,897,317,1,935,550,335,690,614,502,94,872,269,318,735,651,71,506,886,359,2,38,320,219,274,308,715,464,252,329,932,726,196,834,869,251,17,248,60,99,911,271,665,783,140,603,621,827,975,807,459,853,605,537,550,384,444,732,614,606,866,290,630,665,746,787,410,532,27,271,457,979,774,97,238,760,205,306,679,811,857,849,689,512,927,151,772,219,251,387,747,961,21,115,511,393,791,5,204,173,280,251,468,789,197,909,710,822,731,539,121,310,806,836,6,455,305,50,38,289,33,666,78,670,292,241,311,320,173,141,962,207,494,314,779,120,185,303,454,794,962,886,115,647,519,241,808,787,846,878,413,180,465,501,194,86,176,201,537,257,602,604,857,68,545,143,396,733,459,997,559,783,64,931,486,452,611,41,921,506,967,449,23,754,564,130,830,905,678,388,307,464,818,998,970,891,204,754,887,17,495,339,40,494,292,823,746,842,39,524,507,746,764,488,955,670,35,99,387,147,370,261,848,605,695,406,408,84,657,320,982,564,424,742,447,284,658,589,930,765,467,260,552,171,903,869};

    cout<<maximumUniqueSubarray(arr);
    return 0;
}