#include <iostream>
using namespace std;

class Player
{
    // attributes
    string name;
    int age;
    int health;

public:
    // constructor
    // Player(){};  // gives error compiler confus to call which one is best for

    Player() : Player{"None", 0, 0}{};
    Player(string name_v) : Player{name_v, 0, 0}{};
    Player(string name_val, int age_val, int health_val) : name{name_val}, age{age_val}, health{health_val} {cout << "initializng Constructor call\n";};
    
};
int main()
{
    Player player1();
    Player player2("Ram");
    Player player3("shyam", 18, 80);
}
