#include <iostream>
#include <string>

std::string add_symbol (std::string s) 
{
    if (s.length() == 1)
    {
        return s;
    }
    return s.substr(0, 1) + "*" + add_symbol(s.substr(1));
}

int main(int argc, char* argv[])
{
    std::string s = "";
    std::cin >> s;
    std::cout << add_symbol(s) << std::endl;
    return EXIT_SUCCESS;
}
