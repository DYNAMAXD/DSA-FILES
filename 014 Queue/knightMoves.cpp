#include<bits/stdc++.h>
using namespace std;
 
int dist(vector<int>a , vector<int> b)
{
    return (abs(a[0] - b[0]) +abs( a[1] - b[1]));
}

void printboard(vector<vector<int>>&vis)
{
    cout<<endl;
    for(auto i: vis)
    {
        for(auto j: i)
        {
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printpos(vector<int>v)
{
    for(auto i : v)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
}

//this was me trying to implement the bi directional bfs , but i failed miserably

int minStepToReachTarget(vector<int>kp, vector<int>tp , int n , vector<vector<int>>&vis)
{
    // printpos(kp);
    // printpos(tp);
    // if(dist(kp , tp) == 0)
    // {
    //     cout<<"found it"<<endl;
    //     printpos(kp);
    //     printpos(tp);
    // }
    
    cout<<endl;
    if((kp[0] == tp[0] && kp[1] == tp[1] ) || kp[0] < 0 || kp[1] < 0 || kp[0] >=n || kp[1] >= n || tp[0] < 0 || tp[1] < 0 || tp[0] >=n || tp[1] >= n ||vis[kp[0]][kp[1]] == 1)
    {
        vis[kp[0]][kp[1]] = 1;
        return 0;
    }
    vis[kp[0]][kp[1]] = 1; 
    vector<vector<int>> moves = {
        { 2, 1}, { 2,-1}, {-2, 1}, {-2,-1},
{ 1, 2}, { 1,-2}, {-1, 2}, {-1,-2}

    } ;

   vector<int>a , b; 
   int optdist = INT_MAX;
   int movei = 0 , movej = 0;

    vector<int> nextk = kp; 
    vector<int> nextt = tp;
   for(int i=  0 ; i < 8 ; i++)
   {
    for(int j = 0 ; j < 8 ;j++)
    {
        
        vector<int>movek = moves[i];
        vector<int>movet = moves[j];
        
        nextk = kp;
        nextt = tp;

        nextk[0] += movek[0];
        nextk[1] += movek[1];
        
        nextt[0] += movet[0];
        nextt[1] += movet[1];
        
        int d = dist(nextk,  nextt); 
        if( optdist > d)
        {
            movei = i;
            movej = j;
            optdist = d;
        }
    }
}
 
    vector<int>movek = moves[movei];
    vector<int>movet = moves[movej];
    nextk = kp;
    nextt = tp;
    nextk[0] += movek[0];
    nextk[1] += movek[1];

    nextt[0] += movet[0];
    nextt[1] += movet[1];

    int move1 = 1 + minStepToReachTarget(nextk ,  tp , n , vis);

    // int move2 = 2 + minStepToReachTarget(nextk ,  nextt , n , vis);
//    return min(move1 , move2);
return move1;
}



int main(){
    // vector<int>kp = {0 , 0};
    // vector<int>tp = {9 , 9};
    // vector<int>kp = {0 , 9};
    // vector<int>tp = {9 , 0};
    // vector<int>kp = {3 , 3};
    // vector<int>tp = {1 , 2};
    vector<int>kp = {5 , 5};
    vector<int>tp = {8 , 8};
    int n = 10;
    vector<vector<int>> v(n , vector<int>(n , 0));
    cout << minStepToReachTarget(kp , tp , 10 , v) ;
    printboard(v);
    return 0;
}