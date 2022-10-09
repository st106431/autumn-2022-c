#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cout << "Please, enter numbers:" << std::endl;
	std::cin >> a;
	std::cin >> b;
	int count = 0;
	count = a ^ ((a ^ b) & -(a < b));
	std::cout << count << std::endl;
	return EXIT_SUCCESS;
}


