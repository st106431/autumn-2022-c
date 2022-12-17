#include <iostream>

int max_number(std::string s)
{
    if (s.length() == 1)
    {
        return static_cast<int>(s[0]) - 48;
    }
    int max = 0;
    max = max_number(s.substr(1, s.length() - 1));
    if(static_cast<int>(s[0]) - 48 > max)
    {
        return static_cast<int>(s[0]) - 48;
    }
    else
    {
        return max;
    }
}

int main(int argc, char* argv[])
{
    std::string s = "";
    std::cin >> s;
    std::cout << max_number(s) << std::endl;
    return EXIT_SUCCESS;
}
