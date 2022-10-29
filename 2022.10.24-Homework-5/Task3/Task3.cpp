#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = -1000;
    int min = 1000;
    int mas[1500]{ -1000 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
        if (max < mas[i])
        {
            max = mas[i];
        }
        if (min > mas[i])
        {
            min = mas[i];
        }

    }
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] == max)
        {
            mas[i] = min;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << mas[i] << " ";
    }
    return EXIT_SUCCESS;
}
