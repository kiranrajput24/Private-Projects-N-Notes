#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secret_message{}, encrypted_message{};
    cout << "Enter Your secrect message :";
    getline(cin, secret_message);
    cout << "Encrypting message...";
    for (char c : secret_message)
    {
        size_t position = alphabet.find(c);

        if (position != string::npos)
        {
            char new_char(key.at(position));
            encrypted_message += new_char;
        }
        else
        {
            encrypted_message += c;
        }
    }
    cout << "Encrypted message : " << encrypted_message << endl;
}