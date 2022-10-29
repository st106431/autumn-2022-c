#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = -1;
    int mas[1002]{ 0 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    mas[n] = mas[0];
    mas[n + 1] = mas[1];
    for (int i = 0; i < n; ++i)
    {
        if (max < mas[i] + mas[i + 1] + mas[i + 2])
        {
            max = mas[i] + mas[i + 1] + mas[i + 2];
        }
    }
    std::cout << max << std::endl;
    return EXIT_SUCCESS;
}
