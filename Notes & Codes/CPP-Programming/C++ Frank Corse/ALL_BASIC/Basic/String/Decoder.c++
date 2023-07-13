#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secret_message{}, encrypted_message{};
    cout << "Enter Your secrect message :";
    getline(cin, encrypted_message);
    cout << endl
         << "Decrypting message" << endl;

    for (char c : encrypted_message)
    {
        size_t position = key.find(c);
        if (position != string::npos)
        {

            char new_char(alphabet.at(position));
            secret_message += new_char;
        }
        else
        {
            secret_message += c;
        }
    }
    cout << "Decrypted message : " << secret_message << endl;
}
