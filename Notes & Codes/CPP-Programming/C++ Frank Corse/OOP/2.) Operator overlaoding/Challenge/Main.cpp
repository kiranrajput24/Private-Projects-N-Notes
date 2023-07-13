#include <iostream>
#include "Mystring.cpp"
using namespace std;

int main()
{
  Mystring s1("Kiran"), s2("Krishna");
  cout<<"Enter s1,s2 string : ";
  cin>>s1;  // done take char * buff and  buff assign to obj;
  cout<<s1;
  cout<<s2;
  s2=s1;  //done problem is that it haven't  any copy constructor or overloaded assingment operator
  s2=move(s1); //error
  s1*=2; // In operator first obj can't be null;
  cout << boolalpha;
  cout << -s1;
}