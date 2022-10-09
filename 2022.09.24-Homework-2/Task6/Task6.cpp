#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Please, enter 4 numbers:" << std::endl;
    int x = 0;
    int y = 0;
    int z = 0;
    int t = 0;
    std::cin >> x >> y >> z >> t;

    if(z == x || t == y)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        if (z + t == x + y || z - t == x - y)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return EXIT_SUCCESS;
}
