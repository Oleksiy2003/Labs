// // Лабораторна робота № 3.4
//  Розгалуження, задане плоскою фігурою
// Варіант 0.9
#include <iostream>
using namespace std;
int main()
{
    double x;
    double y;
    double R;
    cout << "input x "; cin >> x;
    cout << "input y "; cin >> y;
    cout << "input R "; cin >> R;
    if ((y <= sqrt(R * R - x * x) && y <= 0 && x <= 0) || (y <= sqrt(R * R - x * x) && y <= x * x && x >= 0))
        cout << "yes , it's good ";
    else
        cout << "non, error ";
    return 0;
}
