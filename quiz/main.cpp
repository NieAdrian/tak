#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawnaodp[5];
string odp;
int punkty=0;
int main()
{
    int nrpyt=0;
    int nrlinii=1;
    string linia;
    fstream plik;
    plik.open("quiz.txt",ios::in);
    if(plik.good()==false)
    {
        cout<< "nie udalo sie otwaorzyc pliku";
        exit(0);
    }

    while(getline(plik,linia))
    {
        switch((nrlinii))
        {
            case 1: temat=linia; break;
            case 2: nick= linia; break;
            case 3: tresc[nrpyt]=linia; break;
            case 4: odpA[nrpyt]=linia; break;
            case 5: odpB[nrpyt]=linia; break;
            case 6: odpC[nrpyt]=linia; break;
            case 7: odpD[nrpyt]=linia; break;
            case 8: poprawnaodp[nrpyt]=linia; break;
        }
            if(nrlinii==8)
                {
                    nrlinii=2;
                    nrpyt++;
                }
            nrlinii++;
    }
    plik.close();

    for(int i=0; i<4; i++)
        {
            cout << endl << tresc[i] << endl;
            cout << "A. " << odpA[i] << endl;
            cout << "B. " << odpB[i] << endl;
            cout << "C. " << odpC[i] << endl;
            cout << "D. " << odpD[i] << endl;

            cout << "podaj odpowiedz: ";
            cin >> odp;

            transform(odp.begin(),odp.end(),odp.begin(), ::tolower);

            if (odp==poprawnaodp[i])
            {
                cout << "dobra odpowiedz! "<< endl;
                punkty++;
            }
            else
                cout << "zla odpowiedz" << endl;
        }


        cout << endl << "koniec quizu! zdobyles " << punkty << "punktow!";
    return 0;
}
