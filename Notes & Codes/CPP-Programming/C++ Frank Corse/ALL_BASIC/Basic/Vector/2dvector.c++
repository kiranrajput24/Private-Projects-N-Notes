#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> list_2d;
    int val;
    for (int i{}; i < 2; i++)
    {
        vector<int> temp;
        for (int j{}; j < 2; j++)
        {
            cout << "Enter value to add in vector :";
            cin >> val;
            temp.push_back(val);
        }
        list_2d.push_back(temp);
    }

    cout<<"Vectors Elements"<<endl;
    for (size_t i{}; i < list_2d.size(); i++)
        for (size_t j{}; j < list_2d[i].size(); j++)
            cout << list_2d[i][j] << " ";
}