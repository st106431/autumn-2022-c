﻿#include <iostream>

void xan(int n, int from, int to)
{
	if (n == 1)
	{
		std::cout << "Disk 1 move from" << " " << from << " to " << to << std::endl;
		return;
	}
	int tmp = 6 - to - from;
	xan(n - 1, from, tmp);
	std::cout << "Disk " << n << " move from " << from << " to " << to << std::endl;
	xan(n - 1, tmp, to);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	xan(n, 1, 2);
	return EXIT_SUCCESS;
}