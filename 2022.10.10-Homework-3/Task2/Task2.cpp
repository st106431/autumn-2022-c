#include <iostream>

int main(int argc, char* argv[])
{
    int a = 10;
    int count = 0;
    while (a != 0)
    {
        if (a % 2 == -1)
        {
            ++count;
        }
        std::cin >> a;
    }
    std::cout << count << std::endl;
    return EXIT_SUCCESS;
}
