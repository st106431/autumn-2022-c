#include <iostream>

int max_number(std::string s)
{
    if (s.length() == 1) 
    {
        return static_cast<int>(s[0]) - 48;
    }
    int number = max_number(s.substr(1));
    if(number > static_cast<int>(s[0]) - 48)
    {
        return number;
    }
    else
    {
        return static_cast<int>(s[0]) - 48;
    }
}

int main(int argc, char* argv[])
{
    std::string s = "";
    std::cin >> s;
    std::cout << max_number(s) << std::endl;
    return EXIT_SUCCESS;
}
