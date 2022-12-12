#include <iostream>

std::string Dio(int n)
{
    if (n < 1)
    {
        return "NO";
    }
    if (n == 1)
    {
        return "YES";
    }
    if (Dio(n - 3) == "YES" || Dio(n-5) == "YES")
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    std::cout << Dio(n) << std::endl;
    return EXIT_SUCCESS;
}