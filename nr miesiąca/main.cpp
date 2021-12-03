#include <iostream>
#include <stdio.h>
using namespace std;
int nr,rok;
int main()
{
    cout << "Podaj numer miesiaca: " << endl;
    if(!(cin >> nr))
    {
        cerr << "to nie jest liczba!";
        exit(0);
    }
    switch(nr)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "ten miesiac ma 31 dni" ;
    break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << " ten mieisac ma 30 dni" ;
    break;
    case 2 :
        {
            cout << " ktory mamy rok ";
            cin >> rok;
            if((rok%4==0 && rok%100!=0) || rok%400==0)
                cout << " ten miesiac ma 29 dni" ;
            else
                cout << " ten miesiac ma 28 dni" ;

        }
    break;
    default: cout << "niepoprawna liczba";
    }
    return 0;
}
