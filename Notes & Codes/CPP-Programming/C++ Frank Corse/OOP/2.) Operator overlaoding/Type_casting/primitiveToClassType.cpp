#include<iostream>
using namespace std;

 class Time
{
private:
    int hours, minutes;

public:
    Time(int mins=0)
    {
        hours = mins / 60;
        minutes = mins % 60;
    }
    void getTime()
    {
        cout << "\nTime " << hours << " : " << minutes << endl;
    }
};
int main()
{
    int mins;
    cout<<"Enter mintues to covert hours and minutes : ";
    cin>>mins;
    Time time;
    // int to class type by constructor
    time=mins;
    time.getTime();
}