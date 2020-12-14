// lab4.5.cpp
//it-12
//v:9
//Lopatskiy Oleksiy

#include <iostream>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{
    double x;
    double y;
    double R;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << "input x "; cin >> x;
        cout << "input y "; cin >> y;
        cout << "input R "; cin >> R;
        if ((y <= sqrt(R * R - x * x) && y <= 0 && x <= 0) || (y <= sqrt(R * R - x * x) && y <= x * x && x >= 0))
            cout << "yes , it's good "<<endl;
        else
            cout << "non, error "<<endl;

    }
    cout << endl << fixed;

        for (int i = 0; i < 10; i++)
        {
            x = 6. * rand() / RAND_MAX - 3;
            y = 6. * rand() / RAND_MAX - 3;
            if ((y <= sqrt(R * R - x * x) && y <= 0 && x <= 0) || (y <= sqrt(R * R - x * x) && y <= x * x && x >= 0))
                cout << setw(8) << setprecision(4) << x << " " << setw(8) << setprecision(4) << y << " " << "yes" << endl;
            else
                cout << setw(8) << setprecision(4) << x << "  "<< setw(8) << setprecision(4) << y << " " << "no" << endl;

        }
        return 0;
}
