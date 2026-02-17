#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
    Node* createTree(){
        cout << "Enter a value for node" << endl;
        int value;
        cin >> value;

        if(value == -1){
            return NULL;
        }
        else{
            Node * root = new Node(value);
            cout << "Adding left child for " << value << endl;
            root->left = createTree();
            cout << "Adding right child for" << value << endl;
            root->right = createTree();
            return root;
        }
    }
    void printTree(Node * root){
        if(root == NULL){
            return;
        }

    }
};



int main(){
    Node * root;
    root->createTree();
    cout<< root->data << endl;
    return 0;
}