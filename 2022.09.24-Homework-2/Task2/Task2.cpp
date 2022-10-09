#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cout << "Please, enter a number:" << std::endl;
	std::cin >> n;
	if (n % 4 == 0)
	{
		if (n % 100 == 0)
		{
			if (n % 400 == 0)
			{
				std::cout << "YES" << std::endl;
			}
			else
				std::cout << "NO" << std::endl;
		}
		else
			std::cout << "YES" << std::endl;
	}
	else
		std::cout << "NO" << std::endl;
	return EXIT_SUCCESS;
}
