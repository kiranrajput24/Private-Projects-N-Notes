#include <iostream>
using namespace std;

class Player
{
    public :
    // attributes
    string name;
    int age;
    int health;
    // constructor
    Player(string name_val, int age_val, int health_val) : name{name_val}, age{age_val}, health{health_val} {cout << "initializng Constructor call";};
};

int main()
{

    Player player3("shyam", 18, 80);
    cout<<"\n"<<player3.name;
}