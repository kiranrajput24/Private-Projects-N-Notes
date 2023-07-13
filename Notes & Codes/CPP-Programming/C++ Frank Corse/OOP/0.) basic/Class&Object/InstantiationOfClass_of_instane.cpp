#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Player
{
    // Attributes
    string name = "Unknown";
    int health{100};
    int age;
    string xp{3};

    // Methods

    void talk(string s);
    void get_info();
};

class Account
{
private:
    string name{name};
    float balance{0};

public:
    bool deposit(double);
    bool widhtraw(double);
};

int main()
{
    Player hero;
    Player kiran;

    Player player[2]{hero,kiran};

    vector<Player> PLAYER{hero};
    PLAYER.push_back(kiran);

    Player *h{nullptr};
    h = new Player;
    cout<<"HEllo world";
    delete h;
    return 0;
}