#include <iostream>
#include <string>
using namespace std;
class Player
{
private:
    string name;
    int age;

public:
    Player(string name_val = "NUll", int age_val = 0) : name{name_val}, age{age_val}
    {
    }

    ~Player()
    {
        cout << "Destructor call for " << name << " " << age << endl;
    }

    void display() const
    {
        cout << "Display Function call\n";
        cout << "Name : " << name << endl;
        cout << "age : " << age <<' '<<' '<<" single quotes allowed"<< endl
             << endl;
    }
    void get_data(const Player &obj) //  const // after adding this keyword  const object also can be ...
    {
        obj.display();
    }
};

int main()
{
    const Player ram("Ram", 25);
    Player *sohan = new Player(ram);
    ram.display();
    // ram.get_data(ram);
    sohan->display();
    sohan->get_data(*sohan);
}