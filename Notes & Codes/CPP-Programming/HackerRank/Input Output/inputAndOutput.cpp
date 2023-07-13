#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string input;
    int count = 1, num, sum = 0;
    std::cout<<"Enter a,b,c value :";
    getline(cin, input);
 istringstream iss{input};
    while (iss >> num)
    {
        if (count>3)
            break;
        count++;

        if (1 <= num && num <= 1000)
            sum += num;
    };

    cout << sum;
    return 0;
}
