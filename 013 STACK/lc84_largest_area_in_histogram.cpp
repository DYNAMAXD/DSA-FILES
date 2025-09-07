 #include<bits/stdc++.h>
 using namespace std;
 
void printst(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
void solvePSE(vector<int>& heights , vector<int>& pse)
{
    stack<int>st;
    st.push(-1);
    int n = heights.size();
    for(int i = 0 ; i < n ; i++)
    { 
        // cout<<"now printing "<<heights[i]<<endl;
        // printst(st);
        while((st.top() != -1 )&& (heights[st.top()] >= heights[i]))st.pop();
        pse.push_back(st.top());
        st.push(i);
    }
}


void solveNSE(vector<int>& heights , vector<int>& nse)
{
    stack<int>st;
    int n = heights.size();
    st.push(-1);
    for(int i = n-1 ; i>= 0 ; i--)
    {
        while(st.top() != -1 && heights[st.top()] >= heights[i])st.pop();
        nse.push_back(st.top());
        st.push(i);
    }
}


int main() {
    //for this we would require a concept of 
    //previous smaller element , next smaller element
    //also that we are storing the indexes not the values into the pse , nse
    vector<int> heights = {2,1,5,6,2,3};
    vector<int>pse;
    vector<int>nse;

    solvePSE(heights , pse);
    solveNSE(heights , nse);
    //we will reverse this nse 
    //ye mai karna bhul jata hu !!!!!!!!!!!
    reverse(nse.begin() , nse.end());
    // for(auto i : nse)
    // {
    //     cout<<i<<" ";
    // }
    
    //also that i need to correctly calculate the indices for the next smallest
    //till this point -1 meant the next element after the last element
    //i.e out of bound element here , so i need to 
    //change it to the size of the heights so it would be computationally correct
    for(int i = 0 ; i < nse.size() ; i++)
    {
        if(nse[i] == -1)nse[i] = nse.size();
    }

    //now i have all the things that i need to calculate the largest area
    //now lets calculate the max 
    int maxi = INT_MIN;
    for(int i = 0 ;i < heights.size() ; i++)
    {
        int width = nse[i] - pse[i] - 1;
        int height = heights[i];
        maxi = max(maxi , width*height);
    }
    cout<< maxi;
}
