#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class test
{
private:
    int data;

public:
    test(int vale) : data{vale} { cout << "\nConstrutor called : " << data << endl; }
    ~test() { cout << "\nDestructor called"; }
};

unique_ptr<vector<shared_ptr<test>>> make()
{
    unique_ptr<vector<shared_ptr<test>>> vec = make_unique<vector<shared_ptr<test>>>();
    return vec;
}

void fill(vector<shared_ptr<test>> &vec, int num)
{
    int value;
    for (int i{}; i < num; i++)
    {
        cout << "Enter [" << i << "] data value : " << endl;
        cin >> value;
        // shared_ptr<test> data=make_shared<test>(value);
        vec.push_back(make_shared<test>(value));
    }
}

void display(const vector<shared_ptr<test>> &vec)
{
    cout << "=============Vector Elements============" << endl;
    for (const auto &v : vec)
        cout << v << endl;
}

int main()
{
    unique_ptr<vector<shared_ptr<test>>> Vec;
    Vec = make();
}