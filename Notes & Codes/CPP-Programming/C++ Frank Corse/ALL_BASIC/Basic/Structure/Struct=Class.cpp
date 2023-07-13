// #include <iostream>
// #include <conio.h>

//// in Structure All public
// struct data
// {
//     int a, b;
//     void set_data(int x = 0, int y = 0)
//     {
//         a = x;
//         b = y;
//     }
//     void print_data()
//     {
//         std::cout << a << " " << b << std::endl;
//     }
// };

// int main()
// {
//     // clrscr();
//     data s1;
//     // here s1 is variable when we use structure
//     s1.set_data(3, 5);
//     s1.print_data();
//     getch();
// }

// #include <iostream>
// #include <conio.h>

// //// In CLass All private

// class data
// {
//     int a, b;
//     public :
//     void set_data(int x = 0, int y = 0)
//     {
//         a = x;
//         b = y;
//     }
//     void print_data()
//     {
//         std::cout << a << " " << b << std::endl;
//     }
// };

// int main()
// {
//     // clrscr();
//     data s1;
//     // here s1 is variable when we use structure
//     s1.set_data(3, 5);
//     s1.print_data();
//     getch();
// }

#include <iostream>
#include <conio.h>

class data
{
    int a, b;

public:
    void set_data(int, int);
    void print_data()
    {
        std::cout << a << " " << b << std::endl;
    }
};

// scope resolation operator  ::
void data :: set_data(int x = 0, int y = 0)
{
    a = x;
    b = y;
}

int main()
{
    // clrscr();
    data s1;
    // here s1 is object when we use class
    s1.set_data(3, 5);
    s1.print_data();
    getch();
}