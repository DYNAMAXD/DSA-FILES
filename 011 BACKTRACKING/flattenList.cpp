#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


// this is the setup of theb question
// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
 class NestedInteger {
   public:
     // Return true if this NestedInteger holds a single integer, rather than a nested list.
     bool isInteger() const;

     // Return the single integer that this NestedInteger holds, if it holds a single integer
     // The result is undefined if this NestedInteger holds a nested list
     int getInteger() const;

     // Return the nested list that this NestedInteger holds, if it holds a nested list
     // The result is undefined if this NestedInteger holds a single integer
     const vector<NestedInteger> &getList() const;
 }; 
//this is the answer for this
class NestedIterator {
public:
    queue<int> ans;
    void flatten(vector<NestedInteger> & nl)
    {
        for(auto it : nl)
        {
            if(it.isInteger())
            {
                // as it is an NestedInteger form , 
                // to get the actual int number they have given the function
                ans.push(it.getInteger());
            }
            else
            {
                //to access that internal NestedInteger , we do this
                flatten(it.getList());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        flatten(nestedList);
    }
    
    int next() {
        int an = ans.front();
        ans.pop();
        return an;
    }
    
    bool hasNext() {
        return !ans.empty();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */