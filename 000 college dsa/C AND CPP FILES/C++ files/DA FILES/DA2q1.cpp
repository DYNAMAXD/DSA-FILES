#include <iostream>
using namespace std;

class r_emp
{
    public:
    string name;
    int id;
    int salary;

    void work(){cout <<"work"<<endl;}
    void meetings(){cout <<"attend meetings"<<endl;}
};

class manager
{
    public:
    int subords;
    string dept;


    void assign_tasks(){cout <<"task assigned"<<endl;}
    void performance_review(){cout <<"performance reviewed"<<endl;}
};

class intern
{
    
    public:
    int duration_of_internship;
    string mentor;

    void learn(){cout <<"learning"<<endl;}
    void assists(){cout <<"assisting with tasks"<<endl;}
};

class team_leader: public manager , public r_emp
{

};

int main()
{
    return 0;
}