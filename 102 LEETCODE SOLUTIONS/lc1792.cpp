#include<bits/stdc++.h>
using namespace std;
//trying brute force method for this , as i am going to assign one student at a time to 
//to every class , and then have max of that value and then do this till i have all the students distributed

float avgRatio(vector<vector<int>>& classes)
{
    float ans = 0.0;
    for(auto i:classes)
    {
        ans+=(1000.0*(1.0*i[0]/i[1]));
        // cout<<ans<<endl;
    }
    return (ans/classes.size())/1000.0;
}

// int maxAverageRatio(vector<vector<int>>& classes, int& extraStudents , int &ans)
// {
    //base case --> when all students have been distributed
    // if(extraStudents == 0)return ans;
    // int maxi=0;
    // for(int i = 0 ; i < classes.size() ; i++)
    // {
    //     classes[i][0]+=1;
        
    // }
    //not doing this one , this seems like too much work for this question
// }
//going for the other way
//or another way could be to sort the array every time on the basis of pass/total 
//and then assigning one student to the class with least of this ratio

bool Dynamax_comparator(vector<int> a , vector<int>b)
{
    float a1 = a[0]/a[1];
    float b1 = b[0]/b[1];

    if(a > b)return true;
    return false;
}

void printclass(vector<vector<int>>& classes)
{
    cout<<endl;
    for(auto i : classes)
    {
        cout<<i[0]<<"  "<<i[1]<<endl;
    }
    cout<<endl;
}

float maxAverageRatio(vector<vector<int>>& classes, int extraStudents )
{
    if(extraStudents == 0) return avgRatio(classes);

    printclass(classes);
    sort(classes.begin() , classes.end() , Dynamax_comparator);

    classes[0][0] = classes[0][0]+1;
    classes[0][1] = classes[0][1]+1;

    return maxAverageRatio(classes , extraStudents - 1);
}

int main(){
    vector<vector<int>>classes = {
        {1 , 2},
        {3 , 5},
        {2 , 2}
    };
    int extra = 2;

    cout<<avgRatio(classes);

    int ans =  maxAverageRatio(classes , extra);

    // cout<<ans;

    return 0;
}