#include <iostream>
using namespace std;
int v;
int t;
int main()
{
    cin >> v;
    cin >> t;
    int s = (v+109)*t;
    cout << s % 109 << endl;
}
