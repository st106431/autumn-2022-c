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
    int** mas_1 = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        mas_1[i] = new int[m] { 0 };
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> mas_1[i][j];
        }
    }
    int** mas_res = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        mas_res[i] = new int[m] { 0 };
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            mas_res[i][j] = mas[i][j] + mas_1[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << mas_res[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] mas[i];
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] mas_1[i];
    }
    delete[] mas;
    delete[] mas_1;
    return EXIT_SUCCESS;
}
