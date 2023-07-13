#include <iostream>
#include <vector>
using namespace std;
template <typename T = int>
class Item
{
    // friend ostream &operator<<(ostream&,const Item&);
private:
    string name;
    T value;

public:
    Item(T Value, string Name = "unknown") : name{Name}, value{Value} {}

    string getname() { return name; }
    T getvalue() { return value; }
};
// ostream &operator<<(ostream &os,const Item &obj) //error
// {
//     os<<obj.name<<endl<<obj.value<<endl;
//     return os;
// }

template <class T1, class T2>
class Pair
{
    T1 data1;
    T2 data2;

public:
    Pair(T1 d1,T2 d2):data1{d1},data2{d2}
    {
        cout << "constructor called\n";
    }

Pair ()=default;
    void getPair() { cout << data1 << endl
                          << data2 << endl; }
};

int main()
{
    Pair<int, double> p1{53, 243.4};
    Pair<int, double> p2;
    Pair<string,int> p3{"Kiran",21};
    p1.getPair();
    p3.getPair();


    /*
        Item<int> l1{100, "kiran"};
        cout << l1.getname() << endl;
        cout << l1.getvalue() << endl;

        Item<double> l2{100.98, "Krishna"};
        cout << l2.getname() << endl;
        cout << l2.getvalue() << endl;

        Item<Item<string>> l3{{"ram", "shyam"}, "Sonu"};
        cout << l3.getname() << endl;
        cout << l3.getvalue().getname() << endl;
        cout << l3.getvalue().getvalue() << endl;

        vector<Item<double>> ItemList;
        ItemList.push_back(Item<double>{ 234.2,"Kiran"});
        ItemList.push_back(Item<double>{124.2,"Krishna"});
        ItemList.push_back(Item<double>{ 324.2,"Ram"});
        ItemList.push_back(Item<double>{ 434.2,"Shyam"});

        for (auto item : ItemList)

        {
            cout << item.getname() << endl;
            cout << item.getvalue() << endl;
        }
     */
    return 0;
};