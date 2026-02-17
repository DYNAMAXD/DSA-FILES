#include<bits/stdc++.h>

using namespace std;

struct node
{
    int num;
    node* next;

    node(int n)
    {
        this->num = n;
        this->next = NULL;
    }

};


void insertLL(node* root , int n)

{
    if(root == NULL)root = new node(n);
    node* temp = root;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new node(n);
}
node* createLL(node*& root )
{
    int n;
    cin>>n;
    if(n == -1)return NULL;
    node* temp = new node(n);
    temp->next = createLL(temp->next);
}

void printLL(node* root)
{
    while(root != NULL)
    {
        cout<<root->num<<" ";
        root = root->next;
    }
}

node* mergeTwoSortedLL(node* root1 , node* root2)
{
    //sorted ll in r1
    node* r1; 
    node* n1 = root1;
    node* n2 = root2;
    
    node* temp = r1;
    while(n1 !=NULL && n2 != NULL)
    {
        if(n1->num < n2->num)
        {
            r1 = n1;
            n1 = n1->next;
            r1 = r1->next;
        }
        else
        {
            r1= n2;
            n2 = n2->next;
            r1 = r1->next;
        }
    }
    if(n1 == NULL)
    {
        r1->next = n2;
    }
    if(n2 == NULL)
    {
        r1->next = n1;
    }
    r1 = temp;
}

int main()
{
    node* root =  createLL(root);  
    node* root2= createLL(root2); 
    

    printLL(root);
    printLL(root2);

    node*root3 = mergeTwoSortedLL(root , root2);
    printLL(root3);
}