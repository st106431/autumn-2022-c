#include <iostream>

int main(int argc, char* argv[])
{
    int mas[1000]{ 0 };
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << mas[n - 1 - i] << " ";
    }
    return EXIT_SUCCESS;
}
