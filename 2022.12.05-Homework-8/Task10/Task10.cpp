#include <iostream>

int clear_forum(int n, int** mas, int k) 
{
    int number = -1;
    for (int i = 0; i < n; ++i)
    {
        if (mas[i][1] == k)
        {
            number = i;
        }
    }
    if (number == -1)
    {
        return 1;
    }
    else
    {
        return clear_forum(n, mas, mas[number][0]) + 1;
    }
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
    delete[] mas;
    return EXIT_SUCCESS;
}
