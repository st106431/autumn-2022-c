#include <iostream>
<<<<<<< HEAD

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cout << "Please, enter numbers:" << std::endl;
    std::cin >> a;
    std::cin >> b;
    int r = b % a;
    std::cout << (b - r) / a << std::endl;
    return EXIT_SUCCESS;
=======
using namespace std;
int a;
int b;
int main()
{   
    cin >> a;
    cin >> b;
    int r = b % a;
    cout << (b - r) / a << endl;
>>>>>>> 7029f4519f3826835af31589c6b15b431c351f11
}
