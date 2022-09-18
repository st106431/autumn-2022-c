#include <iostream>
using namespace std;
int n;
int main()
{
	cin >> n;
	int x = n + (2 - n % 2);
	cout << x << endl;
}
