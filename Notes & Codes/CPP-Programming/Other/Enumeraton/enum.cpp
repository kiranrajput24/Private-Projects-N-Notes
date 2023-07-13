#include <iostream>
using namespace std;
enum class Switch
{
    off,
    on,
    invalid
};
ostream &operator<<(ostream &os, Switch input)
{
    switch (input)
    {
    case Switch::off:
        os << " Switch OFF";
        break;
    case Switch::on:
        os << "switch On";
        break;
    case Switch::invalid:
        os << "Invalid input";
        break;
    default:
        os << "Not even Enum type" << std::endl;
        os << "Invalid input :";
    }
    return os;
}
istream &operator>>(istream &in, Switch &input)
{
    std::underlying_type_t<Switch> Uinput;
    cin >> Uinput;
    switch (Uinput)
    {
    case int(Switch::off):  // scope type enum need explixit type conversion
    case int(Switch::on):
        input = Switch(Uinput);
        break;
    default:
        input = Switch::invalid;
    }
    return in;
}
int main()
{
    Switch input;
    cout << "\n1 for On\n0 for Off \nEntered key for On\\Off Switch ";
    // cin.clear();
    // cin.ignore(123, '\n');
    cin >> input;
    cout << input;
}
