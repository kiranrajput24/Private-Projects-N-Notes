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
    Player()
    {
        cout << "no agrs call";
    };
};

int main()
{
    Player player1();
}
