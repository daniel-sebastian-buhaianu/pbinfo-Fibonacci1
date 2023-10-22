#include <iostream>
using namespace std;
int main()
{
	int n, x, y, z;
	cin >> n;
	x = y = 1;
	if (x <= n)
	{
		cout << x << ' ';
	}
	if (y <= n)
	{
		cout << y << ' ';
	}
	do
	{
		z = x+y;
		if (z <= n)
		{
			cout << z << ' ';
		}
		x = y;
		y = z;
	} while (z < n);
	return 0;
}
// scor 100
