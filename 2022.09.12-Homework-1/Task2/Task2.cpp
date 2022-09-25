#include <iostream>
using namespace std;
int a;
int b;
int main()
{   
    cin >> a;
    cin >> b;
    int r = b % a;
    cout << (b - r) / a << endl;
}
