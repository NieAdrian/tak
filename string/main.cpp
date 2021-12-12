#include <iostream>

using namespace std;

int main()
{
    int dlugosc;
    char ostatnia;
    string imie;
    cout << "podaj  imie: ";
    cin >> imie;
    dlugosc = imie.length();
    ostatnia = imie[dlugosc-1];
    cout << "ostatnia litera to: " << ostatnia << endl;
    if (ostatnia=='a')
        cout << "jestes kobieta";
    else
        cout << "jestes mezczyzna";


    return 0;
}
