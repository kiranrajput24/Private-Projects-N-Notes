/* #include <iostream>
using namespace std;
double average(int sum, int total)
{
    if (total == 0)
        throw 0;
    if (sum < 0 || total < 0)
        throw string{"Negative value not allowed"};
    return sum / total;
}
int main()
{
    int Int1, Int2;
    double avg, total, sum = 100.00;
    cout << "Enter the total value(Int) : ";
    cin >> total;

    try
    {
        avg = average(sum, total);
        cout << "Average is " << avg << endl;
    }
    catch (int &ex)
    {
        cout << ex << " not allowed : in denominator :";
    }


    catch (string ex)
    {
        cout << ex << endl;
    }

    catch (...)
    {
        cout << "(...) called ";
    }

    return 0;
} */


#include <iostream>
using namespace std;

int main()
{
    int Int1, Int2;
    double total;
    cout << "Enter 1 value :";
    cin >> Int1;
    cout << "Enter 2 value :";
    cin >> Int2;

    try
    {
        if(Int2==0)
        throw 0;
        total = Int1 / Int2;
        cout<<"int2/int2 ; "<<total<<endl;
    }
    catch(int &ex)
    {
        cout<<ex<<" not allowed : in denemurator :";
    }
    return 0;
} 
