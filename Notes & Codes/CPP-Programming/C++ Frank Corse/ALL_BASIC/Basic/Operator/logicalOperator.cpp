#include<iostream>
using namespace std;

int main()
{
    const int temperatue_for_coat{30};
    const int wind_speed_for_coat{25};
    int temperature,wind_speed;
    bool check;
    cout<<boolalpha;
    cout<<"Enter curent temperature :";
    cin>>temperature;
    cout<<"Enter current wind Speed :";
    cin>>wind_speed;
    check=(temperatue_for_coat>=temperature||wind_speed_for_coat<=wind_speed);
    cout<<"Should you wear coat (using OR) : "<<check<<endl;
    check=(temperatue_for_coat>=temperature && wind_speed_for_coat<=wind_speed);
    cout<<"Should you wear coat (using AND) : "<<check<<endl;
}