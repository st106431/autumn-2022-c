#include <iostream>

int n, k;
int var = 0, A = 0;
int** field = new int* [n] { 0 };

void put_figure(int a, int b)
{
	if (a > 1) 
	{
		for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
		{
			++field[a - 2][j];
			++field[a - 1][j];
		}
	}
	else
	{
		if (a > 0)
		{
			for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
			{
				++field[a - 1][j];
			}
		}
	}
	if (a < n - 2)
	{
		for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
		{
			++field[a + 2][j];
			++field[a + 1][j];
		}
	}
	else
	{
		if (a < n - 1)
		{
			for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
			{
				++field[a + 1][j];
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		++field[a][i];
		++field[i][b];
		if (a - i >= 0)
		{
			if (b - i >= 0)
			{
				++field[a - i][b - i];
			}
			if (b + i < n)
			{
				++field[a - i][b + i];
			}
		}
		if (a + i < n)
		{
			if (b + i < n)
			{
				++field[a + i][b + i];
			}
			if (b - i >= 0)
			{
				++field[a + i][b - i];
			}
		}
	}
	field[a][b] += 10000;
}

void get_m(int a, int b)
{
	if (a > 1)
	{
		for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
		{
			--field[a - 2][j];
			--field[a - 1][j];
		}
	}
	else
	{
		if (a > 0)
		{
			for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
			{
				--field[a - 1][j];
			}
		}
	}
	if (a < n - 2)
	{
		for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
		{
			--field[a + 2][j];
			--field[a + 1][j];
		}
	}
	else
	{
		if (a < n - 1)
		{
			for (int j = std::max(0, b - 2); j < std::min(n, b + 3); ++j)
			{
				--field[a + 1][j];
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		--field[a][i];
		--field[i][b];
		if (a - i >= 0)
		{
			if (b - i >= 0)
			{
				--field[a - i][b - i];
			}
			if (b + i < n) 
			{
				--field[a - i][b + i];
			}
		}
		if (a + i < n)
		{
			if (b + i < n)
			{
				--field[a + i][b + i];
			}
			if (b - i >= 0)
			{
				--field[a + i][b - i];
			}
		}
	}
	field[a][b] -= 10000;
}

void s(int x)
{
	if (x == k)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (field[i][j] == 0)
				{
					++var;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (field[i][j] == 0)
				{
					put_figure(i, j);
					s(x + 1);
					get_m(i, j);
				}
			}
		}
	}
}

void start()
{
	if (k == 1)
	{
		A = n * n;
	}
	else
	{
		for (int i = 0; i < (n + 1) / 2; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				var = 0;
				put_figure(i, j);
				s(2);
				get_m(i, j);
				if (i == n / 2)
				{
					if (i == j)
					{
						A += var;
					}
					else
					{
						A += 4 * var;
					}
				}
				else
				{
					if (i == j)
					{
						A += 4 * var;
					}
					else
					{
						A += 8 * var;
					}
				}
			}
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n >> k;
	field = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		field[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			field[i][j] = 0;
		}
		start();
		int fact = 1;
		for (int i = 1; i <= k; ++i)
		{
			fact *= i;
		}
		std::cout << A / fact << std::endl;
		for (int i = 0; i < n; ++i)
		{
			delete field[i];
		}
	}
}