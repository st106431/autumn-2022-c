#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "Please, enter 3 numbers:" << std::endl;
	int n = 0;
	int m = 0;
	int k = 0;
	std::cin >> n >> m >> k;

	if (k > n * m) 
	{
		std::cout << "NO" << std::endl;
	}
	else
	{
		if(k % n == 0 || k % m == 0)
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}
	return EXIT_SUCCESS;
}
