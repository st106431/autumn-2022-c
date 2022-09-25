// Task9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int x;
int main()
{
	cin >> x;
	int t = x * x;
	int s = t * (1 + x + t) + x + 1;
	cout << s;
}