#include <iostream>
using namespace std;

int main()
{
    int cents;
    int dollar_value{100}, quarter_value{25}, dime_value{10}, nickel_value{5}, penny_value{1}, 
    dollar, quarter, dime, nickel, penny;
    cout << "Enter cents ";
    cin >> cents;

    // dollar = (cents / dollar_value);
    // cents = (cents % dollar_value);

    // quarter = (cents / quarter_value);
    // cents = (cents % quarter_value);

    // dime = (cents / dime_value);
    // cents = (cents % dime_value);

    // nickel = (cents / nickel_value);
    // cents = (cents % nickel_value);

    // penny = (cents / penny_value);

    dollar = (cents / dollar_value);
    cents = (cents-(dollar*dollar_value));

    quarter = (cents / quarter_value);
    cents -= (quarter*quarter_value);

    dime = (cents / dime_value);
    cents = (cents % dime_value);

    nickel = (cents / nickel_value);
    cents %=(nickel_value);

    penny = (cents / penny_value);

    cout << endl
         << dollar << " Dollar" << endl;
    cout << endl
         << quarter << " quarter" << endl;
    cout << endl
         << dime << " dime" << endl;
    cout << endl
         << nickel << " nickel" << endl;
    cout << endl
         << penny << " penny" << endl;
}