#include <iostream>
<<<<<<< HEAD

int main(int argc, char* argv[])
{
    int v = 0;
    int t = 0;
    std::cout << "Please, enter numbers:" << std::endl;
    std::cin >> v;
    std::cin >> t;
    int V = v % 109;
    int s = (V+109)*t;
    std::cout << s % 109 << std::endl;
    return EXIT_SUCCESS;
=======
using namespace std;
int v;
int t;
int main()
{
    cin >> v;
    cin >> t;
    int s = (v+109)*t;
    cout << s % 109 << endl;
>>>>>>> 7029f4519f3826835af31589c6b15b431c351f11
}
