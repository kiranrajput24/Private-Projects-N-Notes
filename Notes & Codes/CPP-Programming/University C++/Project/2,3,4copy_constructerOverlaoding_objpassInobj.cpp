#include <iostream>
using namespace std;
class Player
{
    friend Player change_data(Player);
    string name;
    int age;
    void nothing() // 9 private member 
    {

    }
public:
    // Constructor overloading
    Player() = default;
    Player(string N, int A) : name{N}, age{A} {};
    Player(const Player &obj) : Player(obj.name, obj.age){

                                };
    void printdata()
    {
        cout << "===============Details=============="<<endl;
        cout << "Name : " << name << " Age : " << age<<endl;
    }
};
Player change_data(Player p)
{
    p.name="Rohan";
    p.age=29;
    return p;
}

int main()
{

    Player p1{"sonu",18},p2;
    p1.printdata();

    p1 = change_data(p1);
    cout<<"\n=====                                                                                                                                                                                                                                                                                                                                                                                                                                            ====After  Change and copy===============\n";
    p1.printdata();

    p2=p1;
    cout<<"\n=======After copy============\n";
    p2.printdata();

    return 0;
}