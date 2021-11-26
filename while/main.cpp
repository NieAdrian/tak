#include <iostream>

using namespace std;

int populacja=1, czas;

int main()
{
    while(populacja<=72000000)
    {
        czas++;
        populacja=populacja*2;

        cout << "ilosc godzin: "<< czas;
        cout << " ilosc bakterii: " << populacja<<endl;
    }
    cout << "potrzeba "<<czas<< " godzin";
    return 0;
}
