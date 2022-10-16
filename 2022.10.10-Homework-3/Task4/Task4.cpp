#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int i = 0;
	int k = -1;
	int previous = 0;
	do
	{
		int j = 1;
		{   int j = 0;
			int r = (i + j + 1) % 5;
			if (r == 0)
			{
				r = 5;
			}
			previous = r;
			std::cout << previous << " ";
		}
		do
		{
			if (j == 1 && previous == 5)
			{
				k = -1;
			} 
			else
			{
				if (j == 1)
				{
					k = 1;
				}
			}
			if (j > 1 && (previous == 5 || previous == 1))
			{
				k = -k;
			}
			std::cout << previous + k << " ";
			previous = previous + k;
			++j;
		} while (j < n);
		std::cout << std::endl;
		++i;
	} while (i < n);
	return EXIT_SUCCESS;
}
