#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int number = 0;
    int mas[100000]{ 0 };
    int mas_1[100000]{ 0 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
        mas_1[i] = mas[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if(mas[i] == 1)
        {
            number = i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (number + i >= n)
        {
            mas_1[i] = mas[number + i - n];
        }
        else
        {
            mas_1[i] = mas[number + i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << mas_1[i];
    }
    return EXIT_SUCCESS;
}
