#include <iostream>
#include <cstring>
using namespace std;
class Mystring
{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend istream &operator>>(istream &in, Mystring &obj);
    friend ostream &operator<<(ostream &out, Mystring &obj);

private:
    char *str;

public:
    Mystring() : str{nullptr}
    {
        str = new char[1];
        str = '\0';
    }
    Mystring(const char *s) : str{nullptr}
    {
        if (s == nullptr)
        {
            str = new char[1];
            str = '\0';
        }
        else
        {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }
    Mystring(const Mystring &String) : str{nullptr}
    {
        delete[] str;
        str = new char[strlen(String.str) + 1];
        strcpy(str, String.str);
    }

    ~Mystring()
    {
        delete[] str;
    }

    string get()
    {
        return str;
    }

    void set(const char *s)
    {
        if (s == nullptr)
        {
            str = new char[1];
            str = '\0';
        }
        else
        {
            delete[] str;
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }

    int get_length()
    {
        return strlen(str);
    }

    void display()
    {
        cout << "Str : " << str << "      Length : " << strlen(str) << endl;
    }
    void get_address()
    {
        cout << &str << endl;
    }

    Mystring &operator=(const Mystring &String)
    {

        if (this == &String)
            return *this;

        delete[] str;
        str = new char[strlen(String.str) + 1];
        strcpy(str, String.str);
        return *this;
    }
    Mystring &operator=(Mystring &&String)
    {
        if (this == &String)
            return *this;

        delete[] str;
        str = String.str;
        String.str = nullptr;
        return *this;
    }

    // Mystring operator-() const // lower case operator
    // {
    //     char *buff = new char[strlen(str) + 1];
    //     strcpy(buff, str);
    //     for (size_t i = 0; i < strlen(buff); i++)
    //         buff[i] = tolower(buff[i]);
    //     Mystring temp{buff};
    //     delete[] buff;
    //     return temp;
    // }

    // Mystring operator+(const Mystring &String) const // conacatenation  operator
    // {
    //     char *buff = new char[strlen(str) + strlen(String.str) + 1];
    //     strcpy(buff, str);
    //     strcat(buff, String.str);
    //     Mystring temp(buff);
    //     delete buff;
    //     return temp;
    // }

    // bool operator==(const Mystring &String) const
    // {
    //     return (strcmp(str, String.str) == 0);
    // }
};

bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return (strcmp(lhs.str, rhs.str) == 0);
}

Mystring operator-(const Mystring &obj)
{
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);
    for (size_t i = 0; i < strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp(buff);
    delete[] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp(buff);
    delete[] buff;
    return temp;
}

istream &operator>>(istream &in, Mystring &obj)
{
    char *buff = new char[1000];
    in>>buff;
    obj = Mystring(buff);
    delete buff;
    return (in);
}
ostream &operator<<(ostream &out, Mystring &obj)
{
    out << endl
        << obj.str << endl;
    return out;
}

int main()
{
    Mystring s1, s2;
    cout<<"\nEnter first string value :";
    cin >> s1;
    cout << s1;
    cout<<"\nEnter second string Value :";
    cin>>s2;
    cout<<s2;

    bool boolen = (s1 == s2);
    cout<<boolalpha;
    cout << "s2==s2  : " << boolen << endl
         << endl;
    return 0;
}