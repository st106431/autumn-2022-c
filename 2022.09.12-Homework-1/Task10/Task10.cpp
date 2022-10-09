#include <iostream>
<<<<<<< HEAD

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
=======
using namespace std;
int a;
int b;
int main()
{
	cin >> a;
	cin >> b;
	int count = 0;
	if (b == 0) {
		cout << "Incorrect" << endl;
	}
	else {
		int x = abs(a);
		int y = abs(b);
		if (a > 0 && b > 0) {
			while (x >= y)
			{
				x = x - y;
				count++;
			}
		}
		if (a > 0 && b < 0) {
			count++;
			while (x > 0)
			    {
				x = x - y;
				count--;
				}
		}
		if (a < 0 && b > 0) {
			while (a < 0)
			{
				a = y + a;
				count--;
			}
		}
		if (a < 0 && b < 0) {
			while (x > 0)
			{
				x = x - y;
				count++;
			}
		}
	}
	cout << count << endl;
>>>>>>> 7029f4519f3826835af31589c6b15b431c351f11
}


