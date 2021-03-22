#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, d;

	cin >> n;
	a = n / 1000;
	b = (n / 100) % 10;
	c = (n / 10) % 10;
	d = n % 10;

	cout << a * b + c * d;

	return 0;
}