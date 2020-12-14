// lab4.6.cpp
#include <iostream>
#include<cmath>
// умова
//20       j    ___________
// E  * -------| 400
//j=2    j*j +    П    * i
//              i=j*j
using namespace std;
int main()
{
    double P, S, i,j;
    j = 2;
    S = 0;
    while (j <= 20) {
        P = 1;
        i = j*j;
        while (i <= 400) {
            P *= i;
            i ++;
        }
        S = j / (j * j + P * i);
        j++;
        
    }
    cout << S<<endl;

    j = 2;
    S = 0;
    do {
        P = 1;
        i = j * j;
        do {
            P *= i;
            i++;
        } while (i <= 400);
        S = j / (j * j + P * i);
        j++;
    } while (j <= 20);

    cout << S << endl;
    S = 0;
    for (j = 2; j <= 20; j++) {
        P = 1;
        for (i=j*j; i <= 400; i++)
            P *= i;
        S = j / (j * j + P * i);
         
    }
    cout << S << endl;

    S = 0;
    for (j = 20; j >= 2; j-=1) {
        P = 1;
        for (i = 400; i >= j*j; i-=1)
            P *= i;
        S = j / (j * j + P * i);
    }
    cout << S ;
}
