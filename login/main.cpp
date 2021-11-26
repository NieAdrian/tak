#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "podaj login: ";
    cin >> login;
    cout << "podaj haslo: ";
    cin >> haslo;

    if((login=="admin")&&(haslo=="szarlotka"))
    {
        cout << "zalogowano";
    }
    if((login=="admin")&&(haslo!="szarlotka"))
    {
        cout << "bledne haslo";
    }
    if(login!="admin")
    {
        cout << "bledny login";
    }

    return 0;
}
