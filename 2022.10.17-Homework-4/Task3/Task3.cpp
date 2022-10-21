#include <iostream>

int main(int argc, char* argv[])
{
    int x = 0;
    int sum = 0;
    int i = 0;
    int j = 0;
    int count = 0;
    std::cin >> x;
    for(i = 0; sum < x; ++i)
    {
        sum += i;
    }
    for (j = 1; j <= i; j++)
    {
        for(int k = 1; k <= j && count < x; ++k)
        {
            std::cout << j << " ";
            ++count;
        }
    }
    return EXIT_SUCCESS;
}
