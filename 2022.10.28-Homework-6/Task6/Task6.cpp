#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int mas[100]{ 0 };
    int count = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] % 2 == 1)
        {
            std::cout << mas[i] << " ";
            ++count;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] % 2 == 0)
        {
            std::cout << mas[i] << " ";
        }
    }
    std::cout << std::endl;
    if (2 * count <= n)
    {
        std::cout << "YES" << std::endl;
    }
    else 
    {
        std::cout << "NO" << std::endl;
    }
    return EXIT_SUCCESS;
}
