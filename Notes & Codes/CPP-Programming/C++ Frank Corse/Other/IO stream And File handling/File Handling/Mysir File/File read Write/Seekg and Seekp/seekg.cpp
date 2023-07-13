#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin{"text.txt"};
    if (!fin.is_open())
    {
        cerr << "Error while opening file" << endl
             << endl;
        return 1;
    }
    char ch;
    int pos;
    pos = fin.tellg();
    cout << pos << endl;
    fin >> ch;
    pos = fin.tellg();
    cout << pos << endl;

    cout << (char)(fin.get()) << endl;
    fin.seekg(0);
    cout << (char)(fin.get()) << endl;

    // seekg with double argument
    // fin.seekg(2, ios_base::cur);
    // fin.seekg(2, ios_base::beg);
    fin.seekg(-5, ios_base::end);
    cout << fin.tellg() << endl;
    cout << (char)(fin.get()) << endl;

    return 0;
}
