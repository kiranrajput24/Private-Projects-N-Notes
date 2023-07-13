#include <iostream>
#include <vector>
using namespace std;
template <typename T=int>
class Item
{
    // friend ostream &operator<<(ostream&,const Item&);
private:
    string name;
    T value;

public:
    Item(string Name = {"unknown"}, T Value = {0}) : name{Name}, value{Value}
    {
    }

    string getname() { return name; }
    T getvalue() { return value; }
};
// ostream &operator<<(ostream &os,const Item &obj) //error
// {
//     os<<obj.name<<endl<<obj.value<<endl;
//     return os;
// }

template <class T1, class T2>
class pair
{
    T1 data1;
    T2 data2;

public:
    pair
    {
        cout << "constructor called\n";
    }

    void getpair() { cout << data1 << endl
                          << data2 << endl; }
};

int main()
{
    // pair<int, double> p1;

        Item<int> l1{"kiran", 100};
        // cout << l1.getname() << endl;
        // cout << l1.getvalue() << endl;

        // Item<double> l2{"Krishna", 100.98};
        // cout << l2.getname() << endl;
        // cout << l2.getvalue() << endl;

        // Item<Item<string>> l3{"Sonu", {"ram", "shyam"}};
        // cout << l3.getname() << endl;
        // cout << l3.getvalue().getname() << endl;
        // cout << l3.getvalue().getvalue() << endl;

        // vector<Item<double>> ItemList;
        // ItemList.push_back(Item<double>{"Kiran", 234.2});
        // ItemList.push_back(Item<double>{"Krishna", 124.2});
        // ItemList.push_back(Item<double>{"Ram", 324.2});
        // ItemList.push_back(Item<double>{"Shyam", 434.2});

        // for (auto item : ItemList)

        // {
        //     cout << item.getname() << endl;
        //     cout << item.getvalue() << endl;
        // }

        // pair<int,double>  p1{53,243.4};
        return 0;
};