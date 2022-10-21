#include <iostream>

int main(int argc, char* argv[])
{
    int x = 1;
    std::cin >> x;
    int i = 0;
    int sum = 0;
    for (i = 1; i <= x; ++i)
    {
        if (x % i == 0)
        {
            ++sum;
        }
    }
    std::cout << sum << std::endl;
    return EXIT_SUCCESS;
}
