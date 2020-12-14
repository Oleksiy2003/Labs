// Lab_03.1cpp
// Лабораторна робота № 3.1
// Лінійні програми.
// Варіант 9
//

#include <iostream>
using namespace std;
int main()
{
    double x;// вхідний параметр
    double y;// результат обчислення виразу
    double A;// проміжний результат - функціонально стала частина виразу
    double B;// проміжний результат - функціонально змінна частина виразу
    cout << "x="; cin >> x;
    A = 2 * fabs(x * x * x);
    // first
    if (x <= -0.1) {
        B = 5 * cos(18 * x);
    }
    if (x < 1.2 && x >= -0.1) {
        B = atan2((x + 2), 5);
    }
    if (x >= 1.2) {
        B = (1 / tan(x)) + 18;
    }
    y = A * B;
    cout << "1)y=" << y << endl;
    //second
    if (x <= -0.1)
        B = 5 * cos(18 * x);
    
    else
        if (x < 1.2 && x >= -0.1)
            B = atan2((x + 2), 5);
        else
            B = (1 / tan(x)) + 18;
    y = A * B;
    cout << "2)y=" << y << endl;
    
    cin.get();
    return 0;

}
