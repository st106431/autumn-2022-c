#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int mas[1000]{ 0 };
	int mas_0[1000]{ 0 };
	int mas_1[1000]{ 0 };
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		mas[i] = i + 1;
		mas_0[i] = i + 1;
		mas_1[i] = i + 1;
	}
	std::cin >> a >> b >> c >> d;
	for (int i = 0; i < b - a + 1; ++i)
	{
		mas_0[a - 1 + i] = mas[b - 1 - i];
		mas_1[a - 1 + i] = mas_0[a - 1 + i];
	}
	for (int i = 0; i < d - c + 1; ++i)
	{
		mas_1[c - 1 + i] = mas_0[d - 1 - i];
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << mas_1[i] << " ";
	}
	return EXIT_SUCCESS;
}
