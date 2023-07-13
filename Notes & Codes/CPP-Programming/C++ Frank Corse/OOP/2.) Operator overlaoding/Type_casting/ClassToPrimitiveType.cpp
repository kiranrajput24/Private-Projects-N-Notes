#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:
    Time(int mins = 0)
    {
        hours = mins / 60;
        minutes = mins % 60;
    }
    operator int()
    {
        return (hours * 60 + minutes);
    }
    void getTime()
    {
        cout << "\nTime " << hours << " : " << minutes << endl;
    }
    int getH()
    {
        return hours;
    }
    int getM()
    {
        return minutes;

    }
};

class TimeSeconds
{
    private:
    int seconds;
    public:
    TimeSeconds(int mins=0)
    {
        seconds=mins*60;
    }
    TimeSeconds( Time obj)
    {

        seconds=(((obj.getH())*60*60)+(obj.getM()*(60)));
    }
    void Get_Time_Seconds()
    {
        cout<<"\nTime in Seconds : "<<seconds<<endl;
    }
};


int main()
{
    int mins;
    cout << "Enter mintues to covert hours and minutes : ";
    cin >> mins;
    Time time;
    // int to class type by constructor
    time = mins;
    // class type to primitive type conversion
    mins = time;
    time.getTime();
    TimeSeconds timeseconds;
    // class to class type conversion.....
    timeseconds=time;
    cout << "Minutes : " << mins << endl;
    timeseconds.Get_Time_Seconds();
}