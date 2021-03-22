#include <iostream>
using namespace std;

int main() 
{
    int n, y;
    float p, m, s;

    cout << "sum    ";
    cin >> n;
    cout << "years ";
    cin >> y;
    cout << "procent ";
    cin >> p;

    p = p / 100;
    m = (n * p * pow((1 + p), y)) / (12 * (pow(1 + p, y) - 1));
    s = m * 12 * y;

    cout << m <<"\t"<< s;

    return 0;
}