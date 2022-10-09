#include <iostream>
<<<<<<< HEAD

int main(int argc, char* argv[])
{   
    int n = 0;
	std::cout << "Please, enter a number:" << std::endl;
	std::cin >> n;
	std::cout << "The next number for the number " << n << " is " << n + 1 << "." << std::endl;
	std::cout << "The previous number for the number " << n << " is " << n - 1 << "." << std::endl;
=======
using namespace std;
int n;
int main()
{   
	cin >> n;
	cout << "The next number for the number " << n << " is " << n + 1 << "." << endl;
	cout << "The previous number for the number " << n << " is " << n - 1 << "." << endl;
>>>>>>> 7029f4519f3826835af31589c6b15b431c351f11
	return EXIT_SUCCESS;
}