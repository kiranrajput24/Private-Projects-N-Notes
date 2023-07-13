#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ofstream fout{"text.txt",ios::app};
    ofstream fout;
    fout.open("text.txt",ios::app);
    char ch;
    int pos;
    pos=fout.tellp();
    cout<<pos<<endl;
    fout<<"I'm kiran bohra";
    pos=fout.tellp();
    cout<<pos<<endl;
    fout<<'\n'<<"Yes Boss";
    pos=fout.tellp();
    cout<<pos<<endl;
    return 0;
}
