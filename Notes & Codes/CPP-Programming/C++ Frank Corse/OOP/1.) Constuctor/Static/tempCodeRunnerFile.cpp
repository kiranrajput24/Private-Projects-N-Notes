#include <iostream>
using namespace std;
class Static_Data_Member
{
    int a;

public:
    static int data; // if data is private then we can't directly accesss static data type in Main fun 
    void increment_data()
    {
        data++;
    }
    // Normal function access any type of data but static function access only static type of data
    static void printdata()
    {
        cout << "Data : " << data << endl;
    }
};

int Static_Data_Member::data = 0;

int main()
{
    Static_Data_Member obj1, obj2;
    obj1.increment_data();
    obj1.increment_data();
    obj1.increment_data();
    cout<<"============obj1==================\n";
    obj1.printdata();
    cout<<"============obj2==================\n";
    obj2.printdata();
    cout<<"=============access by class name ==================\n";
    cout<<Static_Data_Member::data<<endl;
    return 0;
}