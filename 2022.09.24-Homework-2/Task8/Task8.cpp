#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Please, enter 3 numbers:" << std::endl;
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;

    if(a < b + c && b < a + c && c < a + b)
    {
        if (2 * std::max(a, std::max(b, c)) * std::max(a, std::max(b, c)) <= a * a + b * b + c * c)
        {
            if(2 * std::max(a, std::max(b, c)) * std::max(a, std::max(b, c)) < a * a + b * b + c * c)
            {
                std::cout << "acute" << std::endl;
            }
            else
            {
                std::cout << "right" << std::endl;
            }
        }
        else
        {
            std::cout << "obtuse" << std::endl;
        }
    }
    else
    {
        std::cout << "impossible" << std::endl;
    }
    return EXIT_SUCCESS;
}
