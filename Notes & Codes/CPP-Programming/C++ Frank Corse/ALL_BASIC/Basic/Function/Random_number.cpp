#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    cout<<"Random number is "<<rand()%6+1<<endl;

}