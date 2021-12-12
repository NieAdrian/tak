#include <iostream>
#include <conio.h>
using namespace std;

char wybor;
float metry;

float ile_cali(float m)
{
    return m*39.37;
}

void ile_mil(float m)
{
    cout << m*0.0006213;
}

float ile_jardow(float m);

int main()
{
    cout << "na co chcesz przeliczyc?" << endl;
    cout << "1. cale" << endl;
    cout << "2. jardy" << endl;
    cout << "3. mile" << endl;

    wybor=getch();
    switch(wybor)
    {
        case '1':
            {
                cout << "podaj ile metrow: " << endl;
                cin >> metry;
                cout << "ilosc cali: " << ile_cali(metry);
                break;
            }
        case '2':
            {
                cout << "podaj ile metrow: " << endl;
                cin >> metry;
                cout << "ilosc jardow: " << ile_jardow(metry);
                break;
            }
        case '3':
            {
                cout << "podaj ile metrow: " << endl;
                cin >> metry;
                cout << "ilosc mil: "; ile_mil(metry);
                break;
            }

        default :
            {
                cout << "bledny wybor";
                break;
            }
    }

    return 0;
}

float ile_jardow(float m)
{
    return m*1.0936;
}
