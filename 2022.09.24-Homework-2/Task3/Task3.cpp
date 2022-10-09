#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "Please, enter 3 numbers:" << std::endl;
	int k = 0;
	int m = 0;
	int n = 0;
	std::cin >> k >> m >> n;

	if (n <= k)
	{
		std::cout << 2 * m << std::endl;
	}
	else
	{
		if ((2 * n) % k == 0)
		{
			std::cout << m * ((2 * n) / k) << std::endl;
		}
		else
		{
			std::cout << m * ((2 * n) / k) + m << std::endl;
		}
	}
	return EXIT_SUCCESS;
}