#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;

    node(int d)
    {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void printFromHead(node * head)
{
    node* temp = head;

    while(temp != NULL)
    {
        
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";

}

void printFromTail(node* tail)
{
    node* temp = tail;
    while(temp !=NULL)
    {
        cout<<temp->data<<"<-";
        temp = temp->prev;
    }
    cout<<"NULL";
}

void insertAtHead(int data , node*& head, node*&tail)
{
    node* newnode = new node(data);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;

    return;
}

int main(){
    node* head = NULL;
    node* tail= NULL;

    insertAtHead(12 , head , tail);
    insertAtHead(23 , head , tail);
    insertAtHead(34 , head , tail);
    insertAtHead(45 , head , tail);
    insertAtHead(56 , head , tail);
    insertAtHead(67 , head , tail);
    cout<<"printing from head"<<endl;
    printFromHead(head);
    
    cout<<endl<<endl<<"printing from tail"<<endl;

    printFromTail(tail);

    return 0;
}