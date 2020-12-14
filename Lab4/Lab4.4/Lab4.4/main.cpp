// lab4.4.cpp
//IT-12
//V:9
//Lopatskiy Oleksiy
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x, y;
    int xend;
    int dx;//step
    cout << "input start "; cin >> x;
    cout << "input end "; cin >> xend;
    cout << "input step  "; cin >> dx;
    cout << "---------------" << endl;
    cout << "|" << setw(3) << "y"<<"   |" ;
    cout << setw(3)<<"x"<<"   |" <<endl;

    while (x <= xend) {
        if (x <= -7)
            y = 0;
        else
            if (x <= -3)
                y = x;
            else
                if (x <= -2)
                    y = 4;
                else
                    if (x <= 2)
                        y = x * x;
                    else
                        if (x <= 4)
                            y = 8 - (2 * x);
                        else
                            if (x > 4)
                                y = 0;
        cout << "---------------"<<endl;
        cout << "|" << setw(3) << y << "   |";
        cout << setw(3) << x << "   |"<< endl;
        
        x += dx;
    }
    cout<<"---------------";
}
