#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int y = 0;
    int max = -1000;
    int number = -1;
    int mas[1500]{ -1000 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    std::cin >> x >> y;
    for (int i = x - 1; i < y; ++i)
    {
        if (max < mas[i])
        {
            max = mas[i];
            number = i + 1;
        }
    }
    std::cout << max << " " << number;
    return EXIT_SUCCESS;
}