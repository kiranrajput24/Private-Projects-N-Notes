#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin{"text.txt"};
    char ch;
    int pos;
    pos = fin.tellg();
    cout << pos << endl;
    fin >> ch;
    pos = fin.tellg();
    cout << pos << endl;
    fin >> ch;
    pos = fin.tellg();
    cout << pos << endl;
    return 0;
}
