#include <iostream>

int** createArray(int length, int wide)
{
    int** mas = new int* [length] { 0 };
    for (int i = 0; i < length; ++i)
    {
        mas[i] = new int [wide] { 0 };
    }
    return mas;
}

void deleteArray(int** mas)
{
    delete[] mas;
}

int** add_to_each_number(int n, int** mas, int add)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            mas[i][j] += add;
        }
    }
    return mas;
}

int** spiral(int n)
{
    int** mas = createArray(n, n);
    if (n == 1)
    {
        mas[0][0] = 1;
        return mas;
    }
    if (n == 2)
    {
        mas[0][0] = 1;
        mas[0][1] = 2;
        mas[1][0] = 4;
        mas[1][1] = 3;
        return mas;
    }
    int** mas_1 = createArray(n - 2, n - 2);
    mas_1 = add_to_each_number(n - 2, spiral(n - 2), 4 * n - 4);
    for (int i = 0; i < n - 1; ++i)
    {
        mas[0][i] = i + 1;
        mas[i][n - 1] = i + n;
        mas[n - 1][i + 1] = 3 * n - 3 - i;
        mas[i + 1][0] = 4 * n - 4 - i;
    }
    for (int i = 1; i < n - 1; ++i)
    {
        for (int j = 1; j < n - 1; ++j)
        {
            mas[i][j] = mas_1[i - 1][j - 1];
        }
    }
    deleteArray(mas_1);
    return mas;
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << spiral(n)[i][j] << " ";
        }
        std::cout << std::endl;
    }
    deleteArray(spiral(n));
	return EXIT_SUCCESS;
}