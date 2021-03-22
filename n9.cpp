#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;

	cout << "-----периметр пр€моугольника-----";
	cout << "\nвведите длину ";
	cin >> a;
	cout << "введите ширину ";
	cin >> b;

	cout << "периметр пр€моугольника " << 2 * (a + b);



	cout << "\n-----периметр треугольника-----";
	int c;
	cout << "\nвведите стороны ";
	cin >> a >> b >> c;
	cout << "периметр треугольника " << a + b + c;



	cout << "\n-----произвольный четырехугольник-----";
	int d;
	cout << "¬ведите сторону а: ";
	cin >> a;
	cout << "¬ведите сторону b: ";
	cin >> b;
	cout << "¬ведите сторону c: ";
	cin >> c;
	cout << "¬ведите сторону d: ";
	cin >> d;
	cout << "произвольный четырехугольник" <<a + b + c + d;


	return 0;
}