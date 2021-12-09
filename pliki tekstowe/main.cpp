#include <iostream>
#include <fstream>
using namespace std;

string imie,nazwisko;
int telefon;

int main()
{
    cout << "podaj imie: " << endl;
    cin >> imie;
    cout << "podaj nazwisko: " << endl;
    cin >> nazwisko;
    cout << "podaj numer telefonu: " << endl;
    cin >> telefon;

    fstream plik;
    plik.open("dane osobowe",ios::out | ios::app);
    plik << imie << endl;
    plik << nazwisko << endl;
    plik << telefon <<endl;

    plik.close();
    return 0;
}
