#include <iostream>

using namespace std;

string pin;

int main()
{
    cout << "witaj w naszym banku!" << endl;
    cout << "podaj pin:";
    cin >> pin;

    if(pin=="1729")
    {
        cout << "poprawny pin" <<endl;
    }
    else
    {
        cout << "niepoprawny pin";
    }
    return 0;
}
