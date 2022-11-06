#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    int count = 0;
    int const N = 30000;
    int mas_1[N]{ 0 };
    int mas_2[N]{ 0 };
    int res[N]{ 100001 };
    int k[N]{ 0 };
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas_1[i];
    }
    for (int i = 0; i < m; ++i)
    {
        std::cin >> mas_2[i];
    }
    for (int i = 0; i < n; ++i)
    {
        int q = 0;
        for (int j = 0; j < m; ++j)
        {
            if (mas_1[i] == mas_2[j])
            {
                res[count] = mas_1[i];
                ++q;
            }
        }
        if (q > 0)
        {
            ++count;
        }
    }

    for (int i = 0; i < count; ++i)
    {
        for (int j = 0; j < count; ++j)
        {
            if (res[i] > res[j])
            {
                ++k[i];
            }
        }
    }
    for (int i = 0; i < count; ++i)
    {
        int s = 1;
        for (int j = 0; j < count; ++j)
        {
           if (k[j] == i && s == 1)
           {
               std::cout << res[j] << " ";
               ++s;
           }
        }
    }
    return EXIT_SUCCESS;
}
