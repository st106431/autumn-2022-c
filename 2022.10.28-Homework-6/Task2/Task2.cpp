#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 1;
    int mas[1000]{ 0 };
    int mas_1[100][2]{0};
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    std::cin >> m;
    for (int i = 0; i < m; ++i)
    {
        std::cin >> mas_1[i][0] >> mas_1[i][1];
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = mas_1[i][0]-1; j < mas_1[i][1]; ++j)
        {
            std::cout << mas[j] << " ";
        }
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}
