#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    int c = n % 10;
    int b = ( (n - c) / 10) % 10;
    int a = (n - 10 * b - c) / 100;
    cout << a+b+c << endl;
}