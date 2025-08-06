#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

void insertAtLL(int a , Node*& head)
{
    Node* temp = head;
    if(temp == NULL)
    {
        Node* newNode = new Node(a);
        head = newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp-> next;
    }
    Node* newNode = new Node(a);
    temp->next = newNode;
    return;
    
}

void printll(Node* head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";
}

Node* reverseKNumbers(Node* head , int k)
{
    // if(head == NULL)return head;
    Node* p = NULL;
    Node* c = head;
    Node* temp = c;
    for(int i = 0 ; i< k ; i++)
    {
        if(temp == NULL)return head;
        temp = temp->next;
    }
    for(int i = 0 ; i < k ; i++)
    {
        if(c == NULL)return head;
        Node* f = c->next;
        c->next = p;
        p = c;
        c = f;
    } 
    head->next = reverseKNumbers(c , k); 
    return p;
}

Node* reversell(Node* head)
{
    Node* p = NULL;
    Node* c = head;
    
    while(c != NULL)
    {
        Node* f = c->next;
        c->next = p;
        p = c;
        c = f;
    }
    return p;
}

int main()
{
    Node* head = NULL;
    vector<int> data = {1,2,3,4,5,6,7,8,9,10,11,12};
    int k = 5;
    for(auto i : data)
    {
        insertAtLL(i , head);
    } 

    
    printll(head);
    cout<<endl<<endl;
    head = reverseKNumbers(head , k);
    printll(head); 
     
}