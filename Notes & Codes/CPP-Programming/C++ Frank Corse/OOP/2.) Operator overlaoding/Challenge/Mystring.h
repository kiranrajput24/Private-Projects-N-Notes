#ifndef _MYSTRING_H
#define _MYSTRING_H_
class Mystring
{
private:
char *str;
public:
Mystring();
Mystring(const char *s);
Mystring ( Mystring &obj);
Mystring ( Mystring &&obj);
void getprint();
Mystring &operator=( Mystring &&obj);
Mystring &operator=( Mystring &obj);
// friend std::istream &operator>>(std::istream &din,Mystring &rhs);
friend std::ostream &operator<<(std::ostream &dout,const Mystring &rhs);
Mystring operator-();
bool operator==(const Mystring &rhs)const;
bool operator!=(const Mystring &rhs)const;
bool operator<(const Mystring &rhs)const;
bool operator>(const Mystring &rhs)const;
Mystring operator+(const Mystring &rhs)const;
Mystring &operator+=(const Mystring &rhs);
Mystring operator*(int n);
Mystring &operator*=(int n);
Mystring &operator++();
Mystring &operator++(int);
};
#endif