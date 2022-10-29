#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int min = 2050*2050;
    int number = -1;
    int mas[1500]{ 0 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    std::cin >> x;
    for (int i = 0; i < n; ++i)
    {
        if (x * x + mas[i] * mas[i] - 2 * mas[i] * x < min)
        {
            min = x * x + mas[i] * mas[i] - 2 * mas[i] * x;
            number = i;
        }
    }
    std::cout << mas[number] << std::endl;
    return EXIT_SUCCESS;
}
