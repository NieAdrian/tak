#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;
float x,y;
char opcja;
int main()
{
    for(;;)
        {
    cout << "podaj pierwsza liczbe: " << endl;
    cin >> x;
    cout << "podaj druga liczbe: " << endl;
    cin >> y;
    cout << "wybierz opcje" << endl;
    cout << "1 - dodawanie" << endl;
    cout << "2 - odejmowanie" << endl;
    cout << "3 - mnozenie" << endl;
    cout << "4 - dzielenie" <<endl;
    cout << "5 - zamknij program" << endl;
    opcja = getch();
    switch(opcja)
    {
    case '1':
        {
            cout << "suma to: "<<x+y;
            break;
        }
    case '2':
        {
            cout << "roznica to: "<<x-y;
            break;
        }
    case '3':
        {
            cout << "iloczyn to: "<<x*y;
            break;
        }
    case '4':
        {
            if(y==0)
                 cout<<"nie mozna dzielic przez zero!";
            else cout <<"iloraz to: "<<x/y;
            break;
        }
    case '5':
        {
            exit(0);
        }
    default: cout << "bledny wybor";
    }
    getchar();getchar();
    system("cls");
    }

    return 0;
}
