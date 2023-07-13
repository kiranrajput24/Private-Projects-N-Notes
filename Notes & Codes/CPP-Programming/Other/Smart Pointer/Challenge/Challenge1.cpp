#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class test
{
    friend ostream &operator<<(ostream &, test &);

private:
    int data;

public:
    test(int vale = 0) : data{vale} { cout << "Construtor called for : " << data << endl; }
    ~test() { cout << "\nDestructor called  for : " << data << endl; }
};
ostream &operator<<(ostream &os, test &obj)
{
    os << obj.data;
    return os;
}

// unique_ptr<vector<shared_ptr<test>>> make()
auto make()
{
    return make_unique<vector<shared_ptr<test>>>();
}

void fill(vector<shared_ptr<test>> &vec, int num)
{
    int value;
    for (int i{}; i < num; i++)
    {
        cout << "\nEnter [" << i + 1 << "] data value : ";
        cin >> value;
        // shared_ptr<test> data=make_shared<test>(value);
        vec.push_back(make_shared<test>(value));
    }
}

void display(const vector<shared_ptr<test>> &vec)
{
    cout << "=============Vector Elements============" << endl;
    for (const auto &v : vec)
        cout << *v << endl;
}

int main()
{
    int num;
    unique_ptr<vector<shared_ptr<test>>> Vec;
    Vec = make();
    cout << "Enter Number of Elements which you want to store : ";
    cin >> num;
    fill(*Vec, num);
    display(*Vec);
}