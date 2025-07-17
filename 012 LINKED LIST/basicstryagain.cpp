#include<iostream>

using namespace std;

class dnode
{
    public:
        int data;
        dnode* next;
    
        dnode(int d)
        {
            this -> data=  d;
            this -> next= NULL;
        }

};

void printll(dnode* head)
{
    if(head == NULL)
    {
        cout<<"NULL"<<endl;
        return;
    }
    cout<<head->data<<" --> ";
    printll(head->next);
}

void insertAtHead(int data , dnode*& head , dnode*& tail)
{
    // cout<<"inserting this data  "<<data<<" "<<endl;
    dnode* tempnode = new dnode(data);

    if(head == NULL && tail == NULL)
    {
        head = tempnode;
        tail = tempnode;
        return;
    }

    tempnode->next= head;
    head = tempnode;
    return;
}


void insertAtTail(int data , dnode*& head , dnode*& tail)
{
    dnode* tempnode = new dnode(data);
    if(head ==NULL && tail ==NULL)
    {
        head = tempnode;
        tail = tempnode;
        return;
    }
    tail->next = tempnode;
    tail = tempnode;
    return;
}

void insertAtAnyPos(int data , int pos , dnode*& head , dnode *& tail)
{
    dnode* temp = head;

    if(pos == 0)
    {
        insertAtHead(data , head , tail);
        return;
    }
    
    while(--pos)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            insertAtTail(data , head , tail);
            return;
        }
    }

    if(temp->next == NULL)
    {
        insertAtTail(data , head , tail);
        return;
    }
    
    dnode* tempnode = new dnode(data);
    tempnode->next = temp->next;
    temp->next = tempnode;
    return;

}


bool LLSearching(int target , dnode* head)
{
    dnode* temp = head;
    while(head -> next != NULL)
    {
        if(head->data == target)return true;
        head = head -> next;    
    }
    return false;
}


int main()
{   
    dnode* head = NULL;
    dnode* tail = NULL;
    insertAtHead(10 , head , tail); 
    insertAtHead(60 , head , tail);
    cout<<"before the tail insertion"<<endl;
    printll(head);
    cout<<endl<<"after the tail insertion"<<endl;
    insertAtTail(10 , head , tail); 
    insertAtTail(40 , head , tail);
    insertAtTail(50 , head , tail); 
    printll(head);
    cout<<endl<<endl<<endl;
    
    //this is basically inserting at head
    insertAtAnyPos(100 , 0 , head , tail); 
    //inserting at tail
    insertAtAnyPos(1010 , 100, head , tail);
    //inserting at 3
    insertAtAnyPos(2010 , 3, head , tail);
    printll(head);

    if(LLSearching(89 , head))
    {
        cout<<"found it"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    return 0;
}