#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = -1;
    int number = -1;
    int v[100]{ 0 };
    int p[100]{ 0 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        std::cin >> p[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if(max < v[i] * p[i])
        {
            max = v[i] * p[i];
            number = i;
        }
    }
    std::cout << number + 1 << std::endl;
    return EXIT_SUCCESS;
}