#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float r, v, s;

	cout << "Радиус шара: ";
	cin >> r;
	v = 4 / 3 * 3.14 * pow(r, 3);
	s = 4 * 3.14 * pow(r, 2);
	cout << "Объем шара: " << v << endl;
	cout << "Площадь шара: " << s << endl;
}
