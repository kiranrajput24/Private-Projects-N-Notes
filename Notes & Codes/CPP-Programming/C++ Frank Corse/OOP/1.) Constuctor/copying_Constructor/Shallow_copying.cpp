#include <iostream>
#include <string>
using namespace std;
class Player
{
public:
    int *data;
    string name;

public:
    Player() {}
    void set(string name_val, int data_val)

    {
        name = name_val;
        data = new int;
        *data = data_val;
    }


    ~Player()
    {
        cout << "Destructor call for " << name << " " << *data << endl;
        delete data;
    }

    void display()
    {
        cout<<"Display Function call\n";
        cout << "data : " << *data << endl;
        cout << "Address : " << data << endl<<endl;
    }
};

int main()
{

    // remove one copied object that's change data of other
    // default shallow copy by complier 

    Player ram;
    ram.set("Ram", 19);
    {
        Player mohan(ram);
    }
    Player *sohan = new Player(ram);
    Player pintu(ram);
    delete sohan;

    ram.display();
    ram.data=nullptr; // Good example
    sohan->display();
    // mohan.display();
    pintu.display();
}