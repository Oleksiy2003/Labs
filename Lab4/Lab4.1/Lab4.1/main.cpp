//Lab4.1
//Цикли
//Variant 9
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double i = 1;
    double d = 0;
    while (i <= 15) {
        d += (sin(10 *i) + cos(10 /i)) / sqrt(i);
        i++;
    }
    cout << d << endl;

    i = 1;
    d = 0;
    
do {
        d += (sin(10 * i) + cos(10 /i)) / sqrt(i);
        i++;
    } while (i<= 15);
    cout << d<< endl;

    d = 0;
    
for (i = 1; i <= 15; i++) {
        d += (sin(10. * i) + cos(10. / i)) / sqrt(i);
    }
    cout << d<<endl;

    d = 0;
    for (i = 15; i >= 1; i--) {
        d += (sin(10. * i) + cos(10. / i)) / sqrt(i);
    }
    cout << d <<endl;
    return 0;
}
