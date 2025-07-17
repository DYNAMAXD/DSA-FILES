#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

//iterating through the whole linked list
void printll(node* head)
{
    if(head == NULL)return;
    

    cout<<head->data<<" ";
    printll(head->next); 
}


//inserting at head of the linked list
void insertAtHead(int data ,node*& head , node*& tail )
{ //head ya tail ka data by reference bhejna   ^


    //abh agar koi bhi head ya tail null hai , toh
    //usko pehle starting element pe point karwao
    //yaha pe || use nai kar sakte hai
    if(head == NULL && tail == NULL)
    { 
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    
    //warna simple sa new node banao
    node* newnode = new node(data);
    //uske next ko head pe point karwao
    newnode->next = head;
    //phir head ko change kar do new head pe , kyoki insert at head ho raha hai na
    head = newnode;
    return;
}


void insertAtTail(int data , node*& head , node*& tail )
{
    //pehle se hi new node bana lo 
    //jarurat to padegi hi
    node* newnode = new node(data);
    
    //check karo agar dono un-initialised to nai hai
    //agar hai to initialise kar do phir return kardo
    if(head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    //tail ke next ko new node pe point karwao
    tail->next = newnode;
    //tail ko new node pe point karwao
    tail = newnode;
    return;
}

int main(){
    // node n1(10);

    // node* n2 = new node(20);
    node* head = NULL;
    node* tail = NULL;


    insertAtHead(10 , head , tail);
    
    insertAtHead(20 , head , tail);
    insertAtHead(30 , head , tail);
    insertAtHead(40 , head , tail);
    insertAtHead(50 , head , tail);
    insertAtHead(60 , head , tail);
    
    insertAtTail(60 ,head , tail);
    insertAtTail(50 ,head , tail);
    insertAtTail(40 ,head , tail);
    insertAtTail(30 ,head , tail);
    insertAtTail(20 ,head , tail);
    insertAtTail(10 ,head , tail);
    
    printll(head);

    return 0;

}