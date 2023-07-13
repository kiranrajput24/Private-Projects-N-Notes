#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
     int pos;
    ofstream fout;
    fout.open("FSTREAM TEXT.txt",ios::binary);
    getch();
    fout << "fout.open(FSTREAM TEXT.txt)\nEnd";
    pos=fout.tellp();
    cout<<pos<<endl;
    getch();
    fout.close();

//     ifstream fin;
//     char ch;
//     fin.open("FSTREAM TEXT.txt");
//     ch = fin.get();
//     pos=fin.tellg();
//     cout<<pos<<endl;
//     while (!fin.eof())
//     {
//         cout << ch;
//         ch = fin.get();
//     }
}