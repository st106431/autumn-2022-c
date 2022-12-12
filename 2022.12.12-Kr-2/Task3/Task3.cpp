#include <iostream>
#include <cmath>
int check_prime(int n)
{
    int count = 0;
    if (n == 2)
    {
        return 1;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0 && check_prime(i) == 1)
        {
            ++count;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    if (check_prime(n) == 1)
    {
        std::cout << "prime" << std::endl;
    }
    else 
    {
        std::cout << "composite" << std::endl;
    }
    return EXIT_SUCCESS;
}
