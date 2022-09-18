#include <iostream>
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
}
