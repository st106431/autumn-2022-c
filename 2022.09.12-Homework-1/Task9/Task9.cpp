#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	std::cout << "Please, enter a number:" << std::endl;
	std::cin >> x;
	int t = x * x;
	int s = t * (1 + x + t) + x + 1;
	std::cout << s << std::endl;
	return EXIT_SUCCESS;
}