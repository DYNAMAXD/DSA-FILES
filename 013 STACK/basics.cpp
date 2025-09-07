 #include<bits/stdc++.h>

using namespace std;

class stackk
{
    public:
    int n;
    int*arr;
    int top = -1;
    stackk(int num)
    {
        this->n = num;
        int* temp = new int[num];
        this->arr = temp;
    }
    void printall()
    {
        cout<<"printing all" <<endl;
        for(int i = 0 ; i <= this->n ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void printvalid()
    {
        cout<<"printing valid" <<endl;
        for(int i = 0 ; i <= this->top ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void peek()
    {
        cout<<this->arr[this->top]<<endl;
    }

    void push(int num)
    {
        if(this->top == this->n-1)
        {
            cout<<"overflow\n";
            return ;
        }
        this->top++;
        arr[top] = num;
    }
    
    int pop()
    {
        if(top == -1)
        {
            cout<<"underflow\n";
            return -1;
        }
        int temp = this->arr[this->top];
        this->top--;
        return temp;
    }

};

int main()
{
    stackk st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.peek();
    st.push(50);
    st.push(50);
    st.printall();
    
    st.pop();
    st.pop();
    st.printvalid();
    st.pop();
    st.printall();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

}