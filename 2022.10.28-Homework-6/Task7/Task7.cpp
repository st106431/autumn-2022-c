#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int sum = 0;
    int min = 101;
    int max = -101;
    int index_min = -1;
    int index_max = -1;
    int mult = 1;
    int mas[100]{ 0 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] > 0)
        {
            sum = sum + mas[i];
        }
    }
    std::cout << sum << " ";
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] < min)
        {
            min = mas[i];
            index_min = i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            index_max = i;
        }
    }
    if (index_min < index_max)
    {
        for (int i = index_min + 1; i < index_max; ++i)
        {
            mult = mult * mas[i];
        }
    }
    else
    {
        for (int i = index_max + 1; i < index_min; ++i)
        {
            mult = mult * mas[i];
        }
    }
    std::cout << mult;
    return EXIT_SUCCESS;
}
