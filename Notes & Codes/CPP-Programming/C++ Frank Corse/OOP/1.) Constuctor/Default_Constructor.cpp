#include<iostream>
using namespace std;

class Player{
    // attributes
    string name;
    int age;
    int health;
public:
    // constructor
    Player(string name_val="none", int age_val=0,int health_val=0);
};

Player::Player(string name_val, int age_val,int health_val)
{
    name=name_val; age=age_val; health=health_val;
    cout<<"done\n";
};

int main()
{
    Player player1();  // done not print for noags construtor
    
    Player player2("Ram");
    Player player3("shyam",18,80);
    Player player4("Mohan",21);
}
