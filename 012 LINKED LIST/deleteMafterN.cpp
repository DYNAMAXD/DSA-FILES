#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int num;
    node* next;

    node(int n)
    {
        this->next = NULL;
        this->num = n;
    }
};

node* insertLL(node* root)
{
    int n;
    cin>>n;
    if(n == -1)return NULL; 
    root = new node(n);  
    root->next = insertLL(root->next);
}

void printLL(node* root)
{
    node* temp = root;

    while(temp != NULL)
    {
        cout<<temp->num<<" ";
        temp = temp->next;
    }
}

void del(node* root , int n , int m)
{
    node* temp= root;
    node* prev = temp;

    cout<<endl<<endl;
    while(temp != NULL )
    {
        cout<<"take ";
        for(int i = 0 ; i < n && temp != NULL ; i++)
        {
            cout<<temp->num<<" ";
            prev = temp;
            temp = temp->next;
        }

        cout<<endl;
        cout<<"change "<<prev->num<<endl;
        cout<<"del ";

        for(int i = 0 ; i < m && temp != NULL ; i++)
        {
            cout<<temp->num<<" ";
            temp =  temp->next;
        }
        cout<<endl;
        
        prev->next = temp;
        prev = temp;
        
    }
    cout<<endl<<endl;
}

int main()
{   
    node* root;
    root = insertLL(root);
    // printLL(root);
    del(root , 3 , 2);
    printLL(root);
}

// 1 2 3 4 5 6 7 8 9 10 -1