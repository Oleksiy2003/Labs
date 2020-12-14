// lab4.3.cpp
//
//Обчислити і вивести на екран в вигляді таблиці значення функції F на інтервалі від
//X_поч до X_кін з кроком dX.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c, F, x_end, dx;
    double x;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    cout << "x_end = "; cin >> x_end;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "--------" << endl;
    cout << "|" << setw(3) << "F" << "   |" << endl;
    while (x <= x_end) {
        if (a < 0 && x != 0)
            F=(a * x * x )+ b * b * x;
        if (a > 0 && a == 0)
            F = x - (a / (x - c));
        else
            F = 1 + (x / c);
        cout << "--------" << endl;
        cout << "|" << setw(3) << setprecision(1) << F<< "   |"<< endl;
        
        x += dx;
        
    }
    cout << "---------";

}
