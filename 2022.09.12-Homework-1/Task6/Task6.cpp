#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cout << "Please, enter a number:" << std::endl;
	std::cin >> n;
	int x = n + (2 - n % 2);
	std::cout << x << std::endl;
	return EXIT_SUCCESS;
}
