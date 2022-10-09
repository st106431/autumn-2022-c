#include <iostream>
<<<<<<< HEAD

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	std::cout << "Please, enter 6 numbers:" << std::endl;
	std::cin >> a >> b >> c >> x >> y >> z;
	int t = 3600 * (x - a) + 60 * (y - b) + z - c;
	std::cout << t << std::endl;
	return EXIT_SUCCESS;
=======
using namespace std;
int a;
int b;
int c;
int x;
int y;
int z;
int main()
{
	cin >> a >> b >> c >> x >> y >> z;
	int t = 3600 * (x - a) + 60 * (y - b) + z - c;
	cout << t << endl;
>>>>>>> 7029f4519f3826835af31589c6b15b431c351f11
}
