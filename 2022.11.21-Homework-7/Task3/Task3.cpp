﻿#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int** mas = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        mas[i] = new int[n] { 0 };
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> mas[i][j];
        }
    }
    int** mas_1 = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        mas_1[i] = new int[n] { 0 };
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= n - i - 1; ++j)
        {
            if (i + j < n - 1)
            {
                mas_1[i][j] = mas[n - 1 - j][n - 1 - i];
                mas_1[n - 1 - j][n - 1 - i] = mas[i][j];
            }
            if (i + j == n - 1)
            {
                mas_1[i][j] = mas[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << mas_1[i][j] << " ";
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