#include <iostream>

int main(int argc, char* argv[])
{
    int v = 0;
    int t = 0;
    std::cout << "Please, enter numbers:" << std::endl;
    std::cin >> v;
    std::cin >> t;
    int V = v % 109;
    int s = (V+109)*t;
    std::cout << s % 109 << std::endl;
    return EXIT_SUCCESS;
}
