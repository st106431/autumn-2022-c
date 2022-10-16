#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int i = 0;
    do
    {
        int j = 0;
        do
        {

            std::cout << i + j + 1 << " ";
            ++j;
        } while (j < n);
        std::cout << std::endl;
        ++i;
    } while (i < n);
    return EXIT_SUCCESS;
}