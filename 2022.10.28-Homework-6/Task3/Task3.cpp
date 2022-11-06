#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int count = 0;
    int mas[102]{ 0 };
    std::cin >> n;
    for (int i = 1; i < n+1; ++i)
    {
        std::cin >> mas[i];
    }
    mas[0] = 201;
    mas[n + 1] = -1;
    std::cin >> x;
    for (int i = n + 1; i > 0; --i)
    {
        if (mas[i] < x && mas[i - 1] >= x)
        {
            count = i;
        }
    }
    std::cout << count << std::endl;
    return EXIT_SUCCESS;
}
