// // Лабораторна робота № 3.3
//  Розгалуження, задане графіком
// Варіант 9

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double y;
    cout << "input x "; cin >> x;
    if (x <= -7.0)
        y = 0;
    else
        if (x<=-3)
            y = x;
        else
            if (x <= -2)
                y = 4;
            else
                if (x <= 2)
                    y = x * x;
                else
                    if (x <= 4)
                        y = 8 - (2. * x);
                    else
                        if (x>4)
                            y = 0;
    cout << endl;
    cout << "y = " << y;
            
    return 0;
    cin.get();
    
}
