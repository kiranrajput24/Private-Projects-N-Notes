#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secret_message{}, encrypted_message{};
    // cout << alphabet.length() << "  " << key.length() << endl;
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
    secret_message.clear();
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
