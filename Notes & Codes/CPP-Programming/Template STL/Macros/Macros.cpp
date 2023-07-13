#include <iostream>
#define max(a, b) ((a > b) ? a : b)
#define square(a) ((a) * (a))
int main()
{
    std::cout << "Max int " << max(23, 13) << std::endl;
    std::cout << "Max double " << max(234.324, 432.34) << std::endl;
    std::cout << "Max char " << max('A', 'B') << std::endl
              << std::endl;

    std::cout << "Square int = " << square(5) << std::endl;
    std::cout << "Square double = " << square(5.34) << std::endl;
    std::cout << "Square char = " << square('A') << std::endl;
    std::cout << "multiplication = " << 100 / square(5) << std::endl;

    return 0;
}
