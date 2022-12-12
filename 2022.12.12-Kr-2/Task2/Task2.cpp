#include <iostream>

void razv(int n, int* mas) 
{
    if (n == 1)
    {
        std::cout << mas[0];
        return;
    }
    int* res = new int[n - 1] { 0 };
    for (int i = 0; i < n - 1; ++i)
    {
        res[i] = mas[i + 1];
    }
    razv(n - 1, res);
    delete[] res;
    std::cout << " " << mas[0];
}

int main(int argc, char* argv[])
{
    int n = 0;
    int* mas = new int[n] { 0 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    razv(n, mas);
    return EXIT_SUCCESS;
}
