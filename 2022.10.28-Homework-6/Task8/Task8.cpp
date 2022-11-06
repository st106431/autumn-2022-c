#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    int mas[100000]{ 0 };
    int mas_1[100000]{ 0 };
    std::cin >> n;
    for(int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
        mas[i + n] = mas[i];
        mas[i + 2 * n] = mas[i];
    }
    std::cin >> k;
    k = k % n;
    for (int i = 0; i < n; ++i)
    {
        if (i >= k)
        {
            mas_1[i] = mas[i - k];
        }
        else 
        {
            mas_1[i] = mas[i + n - k];
        }
        std::cout << mas_1[i] << " ";
    }
    return EXIT_SUCCESS;
}
