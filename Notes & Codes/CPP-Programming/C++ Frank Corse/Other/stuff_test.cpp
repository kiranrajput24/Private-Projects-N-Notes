#include <iostream>
using namespace std;

template <class T, class U> 
class A {
	T x;
	U y;

public:
	A() { cout << "Constructor Called" << endl; }
};

int main()
{
	A<double, char> a;
	A<int, double> b;
	return 0;
}
