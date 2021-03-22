#include <iostream>
using namespace std;

int main()
{
	int n, b;

	cin >> n >> b;
	while (n%b!=0)
	{
		++b;
	}
	cout << b;

	return 0;
}