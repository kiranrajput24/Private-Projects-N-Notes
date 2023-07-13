#include <iostream>
#include <string>
using namespace std;
class Player
{
private:
    int *data;
    string name;

public:
    void set(string name_val, int data_val)

    {
        name = name_val;
        data = new int;
        *data = data_val;
    }
    Player(string name_val = "NUll", int data_val = 0)
    {
        name = name_val;
        data = new int;
        *data = data_val;
    }

      // OR

    // Player(){}


    Player(const Player &obj)   : Player(obj.name, *obj.data) // Or below->>

    {
        // name = obj.name;
        // data=new int;
        // *data = *(obj.data);
    }

    ~Player()
    {
        cout << "Destructor call for " << name << " " << *data << endl;
        delete data;
    }

    void display()
    {
        cout << "Display Function call\n";
        cout << "data : " << *data << endl;
        cout << "Address : " << data << endl
             << endl;
    }
};

int main()
{
    Player ram;
    ram.set("Ram", 19);
    Player mohan(ram);
    Player *sohan = new Player(ram);
    sohan->set("Sohan",16);
    Player pintu(ram);
    // delete sohan;

    ram.display();
    sohan->display();
    mohan.display();
    pintu.display();
}