#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<climits>
using namespace std;
//this is mehtod 1 
int getDifference(string a , string  b)
{   int a1 ,  a2 ,  b1 ,  b2;

    sscanf(a.c_str(), "%d:%d" , &a1 , &a2);
    sscanf(b.c_str() , "%d:%d" , &b1 , &b2);

    int t1 = 0 , t2 = 0;

    t1 += 60*a1 + a2;
    t2 += 60*b1 + b2;
    
    return min(abs(t1 - t2) , 1440 - abs(t1 - t2));
    
}


int m1findMinDifference(vector<string>& timePoints) {
    vector<string> ans = timePoints;
    sort(ans.begin() , ans.end());
    int mini = INT_MAX;
    for(int i = 0 ; i < ans.size()-1 ; i++)
    {
        cout<<ans[i]<<"  "<<ans[i+1]<<"->"<<getDifference(ans[i] , ans[i+1])<<endl;
        mini  = min(mini ,getDifference(ans[i] , ans[i+1]) );
    }
    mini = min(mini , getDifference(ans[0] , ans[ans.size()-1]));
    return mini;
}

//method 2
//incomplete hai , but sabhi ke liye alag alag minutes calculate karne se accha
//ek hi baar me calculate kar lo , phir compare karte raho adjacent elements ko
int findMinFromStart(string& s)
{
    //this is basically for getting time from 00:00
    int hour , minute;

    sscanf(s.c_str() , "%d:%d" , &hour , &minute); 
    return 60*hour + minute;
}


int m2findMinDifference(vector<string>& timePoints) {
    vector<string> ans = timePoints;
    sort(ans.begin() , ans.end());


    vector<int>timeInMinutes;

    for(auto i : ans)
    {
        timeInMinutes.push_back(findMinFromStart(i));
    }
     
    int mini = INT_MAX;
    for(int i = 0 ; i < timeInMinutes.size()-1 ; i++)
    {
        mini = min(timeInMinutes[i] - timeInMinutes[i+1],mini);
    }
    return min(abs(mini) , 1440);
    
}

int main(){
    vector<string> v1 = {"01:01","02:01","03:00" , "04:00" , "14:34" , "17:43" , "23:57"};

    // cout<<m1findMinDifference(v1);
    cout<<m2findMinDifference(v1);
    return 0;
}