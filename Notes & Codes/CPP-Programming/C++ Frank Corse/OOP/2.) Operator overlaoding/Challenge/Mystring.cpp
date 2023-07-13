#include <iostream>
#include "Mystring.h"
#include <cstring>
#include <cctype>
using namespace std;
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    str = '\0';
}

Mystring::Mystring(const char *s) : str{nullptr}
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

Mystring::Mystring(Mystring &obj)
{
    delete str;
    str = new char[strlen(obj.str) +1];

    strcpy(str, obj.str);
}

Mystring::Mystring(Mystring &&obj) : Mystring{obj.str}
{
    delete obj.str;
}

void Mystring::getprint()
{
    cout << str << endl;
}
Mystring &Mystring::operator=(Mystring &obj)
{
    if (this == &obj)
        return *this;
    else
    {
        delete str;
        str=new char[strlen(obj.str)+1];
        strcpy(str ,obj.str);
        return *this;
    }
}

Mystring &Mystring::operator=(Mystring &&obj)
{
    if (this == &obj)
        return *this;
    else
    {
        delete str;
        str = obj.str;
        obj.str = nullptr;
        return *this;
    }
}

Mystring Mystring::operator-()
{
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (int i{}; i < strlen(str); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp(buff);
    delete buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) == 0);
}

bool Mystring::operator!=(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) != 0);
}

bool Mystring::operator>(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) > 0);
}

bool Mystring::operator<(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) < 0);
}

Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp(buff);
    delete buff;
    return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs)
{
    *this = *this + rhs;
    return *this;

    // char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    // strcpy(buff, str);
    // strcat(buff, rhs.str);
    // *this=Mystring(buff);
    // delete buff;
    // return this;
}

Mystring Mystring::operator*(int n)
{
    // char *buff = new char[(strlen(str) * n) + 1];
    // for (size_t i{0}; i < n; i++)
    //     strcat(buff, str);
    // Mystring temp(buff);
    // delete buff;
    // ////// OR///////
    Mystring temp("");
    for (size_t i{0}; i < n; i++)
        temp = temp + (*this);
    return temp;
}
Mystring &Mystring::operator*=(int n)
{
    // char *buff = new char[(strlen(str) * n) + 1];
    // for (size_t i{0}; i < n; i++)
    //     strcat(buff, str);
    // *this = buff;
    // delete buff;
    //  Alternative......

    *this = *this * n;

    return *this;
}

Mystring &Mystring::operator++()
{
    for (size_t i{}; i < strlen(str); i++)
        str[i] = toupper(str[i]);
    return *this;
}
Mystring &Mystring::operator++(int)
{
    Mystring temp;
    temp=*this;
    operator++();
    // return *this;   this wrong because this like pre-increament
    return temp;;
}
std::istream &operator>>(std::istream &din, Mystring &rhs)
{
    char *buff = new char[1000];
    din >> buff;
    rhs = buff;
    delete buff;
    return (din);
}
std::ostream &operator<<(std::ostream &dout, const Mystring &rhs)
{
    dout << rhs.str << std::endl;
    return (dout);
}
