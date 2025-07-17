#include <iostream>
using namespace std;

class student
{
    private:
    string name;
    int grade;

    friend class teacher;
    public:
    student (string name )
    {
        this ->name = name;
    }
    inline void display()
    {
        cout << this->name<< endl;
        cout << this->grade<< endl;
    }
};

class teacher
{
    private:
    string subject;
    public:
    teacher(string subject)
    {
        this ->subject = subject;
    }

    void displaystudent(class student s1)
    {
        cout << s1.name<< endl;
        cout << s1.grade<< endl;
    }

    void setgrade(class student *s1 ,int grade)
    {
        s1->grade = grade;
    }
};

int main()
{
    student alice("alice");
    teacher t1("math");

    t1.setgrade(&alice , 85);
    alice.display();
    return 0;
}