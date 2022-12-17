#include <iostream>

int clear_forum(int n, int** mas, int k) 
{
    int number = 0;
    for (int i = 0; i < n; ++i)
    {
        if (mas[i][0] == k)
        {
            number += 1;
        }
        if (mas[i][1] == k)
        {
            number += clear_forum(n, mas, mas[i][0]);
        }
    }
    return number;
}

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    std::cin >> n;
    int** mas{ 0 };
    mas = new int* [n];
    for (int i = 0; i < n; ++i) 
    {
        mas[i] = new int [2];
    }
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i][0] >> mas[i][1];
    }
    std::cin >> k;
    std::cout << clear_forum(n, mas, k) << std::endl;
    for (int i = 0; i < n; ++i)
    {
        delete[] mas[i];
    }
        delete[] mas;
    return EXIT_SUCCESS;
}
