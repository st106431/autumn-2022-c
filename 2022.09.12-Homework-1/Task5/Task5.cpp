#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cout << "Please, enter a number:" << std::endl;
    std::cin >> n;
    int c = n % 10;
    int b = ( (n - c) / 10) % 10;
    int a = (n - 10 * b - c) / 100;
    std::cout << a+b+c << std::endl;
    return EXIT_SUCCESS;
}