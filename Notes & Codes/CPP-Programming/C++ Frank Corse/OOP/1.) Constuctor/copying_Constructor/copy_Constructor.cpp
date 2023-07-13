#include <iostream>
using namespace std;
class Player
{
    string name;
    int age;
    int health;
    public:
    Player(string name_val="None", int age_val=0, int health_val=0):name{name_val},age{age_val},health{health_val}
    {cout<<"Call default initilization"<<endl<<endl;}

    Player(const Player &source):Player(source.name,source.age,source.health){cout<<"OBJ Copy Constructor call"<<endl;}

    ~Player(){cout<<" Destructor call for  "<<name<<endl<<endl;}

    void display(void)
    {
        cout<<"\nName : "<<name<<"\nage : "<<age<<"\nhealth :"<<health<<endl;
    }
};

int main()
{
    Player Top("Ram",18);
    Player Middle(Top);
    Middle.display();


}