#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    float r, h, pi = 3.14, s, v;

    cout << "высотa цилиндра: "; cin >> h;
    cout << "радиус цилиндра: "; cin >> r;

    s = 2 * pi * r * (r + h);
    v = pi * (r * r) * h;
    cout << "площадь поверхности цилиндра: " << s << endl;
    cout << "объем цилиндра: " << v << endl;

}
