#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void appendT(int d , node*& head)
{
    node * temp = head;
    if(temp == NULL)
    {
        node* tempnode = new node(d);
        head = tempnode;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    node* tempnode = new node(d);
    temp->next = tempnode;
}


void printll(node* head)
{
    node* temp = head;

    while(temp!= NULL)
    {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";

}
int main(){
    node* head = NULL;
    appendT(10 , head);
    appendT(10 , head);
    appendT(10 , head);
    appendT(20 , head);
    appendT(10 , head);
    appendT(50 , head);
    printll(head);
}