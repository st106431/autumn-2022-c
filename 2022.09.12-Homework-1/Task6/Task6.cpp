#include <iostream>
<<<<<<< HEAD

int main(int argc, char* argv[])
{
	int n = 0;
	std::cout << "Please, enter a number:" << std::endl;
	std::cin >> n;
	int x = n + (2 - n % 2);
	std::cout << x << std::endl;
	return EXIT_SUCCESS;
=======
using namespace std;
int n;
int main()
{
	cin >> n;
	int x = n + (2 - n % 2);
	cout << x << endl;
>>>>>>> 7029f4519f3826835af31589c6b15b431c351f11
}
