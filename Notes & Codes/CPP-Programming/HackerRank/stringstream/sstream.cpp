#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    istringstream iss{str};
    vector<int> integers;
    int num;
    while (iss >> num)
    {
        integers.push_back(num);
        // if (iss.peek() == ',')
        //     iss.ignore();
        iis
    }
    return integers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
