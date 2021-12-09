#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

string imie,nazwisko;
int telefon;

int main()
{

    fstream plik;
    plik.open("dane osobowe",ios::in);
    if(plik.good()==false)
    {
        cout << "bad plik";
        exit(0);
    }

    string linia;
    int nrlinii=1;
    while(getline(plik,linia))
    {
        switch(nrlinii)
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: telefon = atoi(linia.c_str()); break;
        }
        nrlinii++;
    }

    plik.close();

    cout << imie << endl;
    cout << nazwisko << endl;
    cout << telefon;
    return 0;
}
