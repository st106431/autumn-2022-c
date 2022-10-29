#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int count = 0;
    std::cin >> n;
    int mas[1500]{ 0 };
    for(int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    std::cin >> x;
    for (int i = 0; i < n; ++i)
    {
        if(mas[i] == x)
        {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return EXIT_SUCCESS;
}