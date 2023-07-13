// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int mathchKey(const string &key, const string &word)
{
    /*  if (key == word)  // only found exactly love word
         return 1;
     return 0; */

    size_t found = word.find(key);  // found also substring of in words
    if (found == string::npos)
        return 0;
    return 1;
}

void printResult(int wordCount, int keyCount)
{
    cout << setfill('-') << setw(30) << " " << endl;
    cout << wordCount << " words is searched " << endl;
    cout << "Match Words are " << keyCount << endl;
    cout << setfill('-') << setw(30) << " " << endl;
}

int main()
{

    ifstream fin;
    string key, word;
    int keyCount = 0, wordCount = 0;
    // fin.open("description.txt");
    fin.open("romeoandjuliet.txt");
    // if(!fin)
    if(!fin.is_open())
    {
        cerr<<"File not opened succesfully"<<endl;
        return 0;
    }

    // fin>>key;
    // cout<<key;

    cout << "Enter the substring which you want to search : ";
    cin >> key;
    while (!fin.eof())
    {
        fin >> word;
        wordCount++;
        if(mathchKey(key, word))
        {
            keyCount ++;
            cout<<word<<' ';
        }
    }
    printResult(wordCount, keyCount);
    fin.close();
    return 0;
}
