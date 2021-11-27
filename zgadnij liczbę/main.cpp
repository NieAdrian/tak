#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;

int liczba, strzal, proby=1;

int main()
{    //wow
    cout << "Nie dasz rady zgadnac mojej liczby od 1 do 100 " << endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    while(strzal!=liczba)
    {
        cout << "zgadnij jaka to twoja "<<proby<<" proba ";
        cin >> strzal;
        if (strzal==liczba)
            cout << "zgadles za "<<proby<<" razem ";
        if (strzal<liczba)
            cout << "za malo ";
        if (strzal>liczba)
            cout << "za duzo ";
        proby++;

    }

    getchar();getchar();
    return 0;
}
