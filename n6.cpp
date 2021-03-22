#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b;
	cout << "a=" << a << "\nb=" << b;

	c = a;
	a = b;
	b = c;

	cout <<"\na="<< a << "\nb=" << b;
	return 0;
}