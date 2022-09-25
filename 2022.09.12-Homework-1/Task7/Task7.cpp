#include <iostream>
using namespace std;
int a;
int b;
int main()
{
    cin >> a;
    cin >> b;
    int c = b;
    int b = a;
    int a = c;
    cout << a << " " << b << endl;
}