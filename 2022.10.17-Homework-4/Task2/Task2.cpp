#include <iostream>

int main(int argc, char* argv[])
{
    int x = 0;
    int n = 0;
    std::cin >> x;
    int i = x;
    int st = 1;
    int size = 1;
    while (i / 10 >= 1)
    {
        ++size;
        i = i / 10;
    }
    for (i = 0; i < size; ++i)
    {
        n += (x % 10) * st;
        x /= 10;
        st *= 2;
    }
    std::cout << n << std::endl;
    return EXIT_SUCCESS;
}
