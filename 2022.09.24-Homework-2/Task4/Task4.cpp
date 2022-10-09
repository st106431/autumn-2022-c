#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cout << "Please, enter 4 numbers:" << std::endl;
	std::cin >> a >> b >> c >> d;

	if (a == 0 && b == 0)
	{
		std::cout << "INF" << std::endl;
	}
	else {
		if (a == 0 || a * d == b * c)
		{
			std::cout << "NO" << std::endl;
		}
		else
		{
			if (b % a == 0)
			{
				std::cout << -b / a << std::endl;
			}
			else
			{
				std::cout << "NO" << std::endl;
			}
		}
	}
	return EXIT_SUCCESS;
}