#include <iostream>
#include <iomanip>
using namespace std;
// 6 digit precision default  after that  Scientific number dispaly
int main()
{
    float F1 = 123456788.128777;
    cout << F1 << endl;
    std::cout << std::setprecision(7) << std::fixed;
    cout << F1 << endl;
    cout << fixed;
    cout << F1 << endl;

    // cout<<"===========scientific================"<<endl;
    // float F2=123456786253539.123545;
    // cout<<showpos<<setprecision(2)<<uppercase<<F2<<endl;
    // cout<<scientific<<F2<<endl;
    // cout << resetiosflags(ios::floatfield);
    // cout.unsetf(ios::showpos);
    // cout.unsetf(ios::fixed);
    // cout<<F2<<endl;

    /* cout << "=============Double============" << endl;
    double D1 = 12.23;
    cout << setprecision(6) << showpoint << D1 << endl;
     */
}