#include <iostream>

std::string sokr_string(std::string s)
{
    if (s.length() == 1)
    {
        return s;
    }
    if (s.length() == 2)
    {
        if (s[0] == s[1]) 
        {
            return "";
        }
        else
        {
            return s;
        }
    }
    if (s[0] == s[s.length() - 1])
    {
        return sokr_string(s.substr(1, s.length() - 2));
    }
    else
    {
        return s.substr(0, 1) + sokr_string(s.substr(1, s.length() - 2)) + s.substr(s.length() - 1, 1);
    }
}

int main(int argc, char* argv[])
{
    std::string s = "";
    std::cin >> s;
    std::cout << sokr_string(s) << std::endl;
    return EXIT_SUCCESS;
}