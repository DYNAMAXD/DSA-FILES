#include <iostream>
using namespace std;

class animal
{
    public:
    int weight;
    int age;

    public:
    void speak()
    {
        cout<< "speaking now" << endl;
    }
};

class dog : public animal
{
    public:
    void speakdog()
    {
        cout<< "dog speaking"<< endl;
    }
} ;

class godlenretirever : public dog
{

};

int main()
{
 dog perry;
 perry.speak();

 godlenretirever agentp;
 agentp.speak();
 agentp.speakdog();
}