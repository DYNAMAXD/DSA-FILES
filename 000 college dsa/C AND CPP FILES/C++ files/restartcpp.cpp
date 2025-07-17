#include <iostream>
#include <cstring>

using namespace std;

class stu{
    public:
    string name,course;
    int fee;
    stu(string name,string course){
        this->name= name;
        this->course =course;
        fee=0;
    }
    stu(string name,string course,int fee){
        cout<<name<<course<<endl;
        this->name= name;
        this->course =course;
        // stu(name,course);
        this->fee=fee;
    }
    
    void showstu(){
        cout<<"name: "<<name<<endl; 
        cout<<"course: "<<course<<endl; 
        cout<<"fee: "<<fee << endl; 
    }
};

int main(){
    stu s1("sita","comp");
    stu s2("gita","sci",5000);
    s1.showstu();
    s2.showstu();
}