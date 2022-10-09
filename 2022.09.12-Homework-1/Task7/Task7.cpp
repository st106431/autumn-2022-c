#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cout << "Please, enter numbers:" << std::endl;
    std::cin >> a;
    std::cin >> b;
    int c = b;
    int b = a;
    int a = c;
    std::cout << a << " " << b << std::endl;
    return EXIT_SUCCESS;
}