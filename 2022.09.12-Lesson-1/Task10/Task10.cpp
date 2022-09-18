#include <iostream>
using namespace std;
int a;
int b;
int main()
{
	cin >> a;
	cin >> b;
	int count = 0;
	if (b == 0) {
		cout << "Incorrect" << endl;
	}
	else {
		int x = abs(a);
		int y = abs(b);
		if (a > 0 && b > 0) {
			while (x >= y)
			{
				x = x - y;
				count++;
			}
		}
		if (a > 0 && b < 0) {
			count++;
			while (x > 0)
			    {
				x = x - y;
				count--;
				}
		}
		if (a < 0 && b > 0) {
			while (a < 0)
			{
				a = y + a;
				count--;
			}
		}
		if (a < 0 && b < 0) {
			while (x > 0)
			{
				x = x - y;
				count++;
			}
		}
	}
	cout << count << endl;
}


