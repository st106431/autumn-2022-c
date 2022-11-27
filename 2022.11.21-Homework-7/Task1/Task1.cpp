#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    int** mas = new int* [n] { 0 };
    for (int i = 0; i < n; ++i) 
    {
        mas[i] = new int[m] { 0 };
    }
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> mas[i][j];
        }
    }
    std::cout << std::endl;

    for(int i = 0; i < n; ++i)
    {
        int sum = 0;
        for (int j = 0; j < m; ++j)
        {
            sum += mas[i][j];
        }
        std::cout << sum << " ";
    }
    std::cout << std::endl;
    for (int j = 0; j < m; ++j)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += mas[i][j];
        }
        std::cout << sum << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << mas[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] mas[i];
    }
    delete[] mas;
    return EXIT_SUCCESS;
}