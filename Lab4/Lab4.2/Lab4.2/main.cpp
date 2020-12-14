//Lab4.2
//Табуляція функції, заданої формулою: функція однієї змінної
//Variant 9
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, A, B, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "------------------------" << endl;
    cout << "|" << setw(4) << "x" << "     |"
        << setw(7) << "y" << "     |" << endl;
    cout << "------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        A = 2 * fabs(x * x * x);
        if (x <= -0.1)
            B = 5 * cos(18 * x);
        else
            if (x < 1.2 && x >= -0.1)
                B = atan2((x + 2), 5);
            else
                B = (1 / tan(x)) + 18;
        y = A * B;
        cout << "|" << setw(9) << setprecision(2) << x
            << "|" << setw(12) << setprecision(2) << y
            << "|" << endl;
        x += dx;
    }
     cout << "------------------------" << endl;
        return 0;
}
