
// #include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream fout; // FSTREAM AND IFSTREAM KAISE CONNECT HAI 
    string str;
    fout.open("romeoandjuliet.txt"); // result produce same both the cases
    // fout.open("romeoandjuliet.txt",ios::binary);  //i don't know difference in text or binary mode  
    if (!fout.is_open())
    {
        // cerr << "File not opened succesfully" << endl;
        return 0;
    }

    // cout << "Enter the substring which you want to search : ";
    fout<<"Hello\nHow are you?,\nmastry in C++ in \t 30 Days";
}