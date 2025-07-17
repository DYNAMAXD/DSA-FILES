#include <iostream>
using namespace std;

class hero
{
    private:
    string name;
    int health;
    string type;
    public:

    void sethealth(int health)
    {
        this -> health = health;
    }
    void gethealth()
    {
        cout << "health of character is : " << this -> health << endl;
    }
    void getname()
    {
        cout << this -> name<< endl;
    }
    void stats()
    {
        cout << this ->name<<endl;
        cout << this ->health<<endl;
        cout << this ->type<<endl;
    }

    //default constructor , parameterised constructor
    hero( string name ,int health , string type)
    {
        this -> name = name;
        this -> health = health;
        this -> type = type;
    }

    //copy constructor
    hero(hero& temp)
    {
        this -> name = temp.name;
        this -> type = temp.type;
        this -> health = temp.health;
    }

};


int main()
{
    
    hero nines( "9S",120 , "support  ");
    nines.stats();
    
    hero twob("2B",  200 , "tank");
    twob.stats();

    hero emil(twob);
    emil.stats();
}