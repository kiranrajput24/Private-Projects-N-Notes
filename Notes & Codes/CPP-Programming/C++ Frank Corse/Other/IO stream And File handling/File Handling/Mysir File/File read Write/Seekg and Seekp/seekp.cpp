#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout{"text.txt", ios::ate | ios::app};
    if (!fout.is_open())
    {
        cerr << "Error while creating file" << endl
             << endl;
        return 1;
    }
    cout << fout.tellp();
    // fout << "end";
    fout.seekp(-5,ios_base::cur);
    fout << "start";

    return 0;
}
