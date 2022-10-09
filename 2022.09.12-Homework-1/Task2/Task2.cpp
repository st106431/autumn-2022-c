#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cout << "Please, enter numbers:" << std::endl;
    std::cin >> a;
    std::cin >> b;
    int r = b % a;
    std::cout << (b - r) / a << std::endl;
    return EXIT_SUCCESS;
}
