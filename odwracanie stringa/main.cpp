#include <iostream>

using namespace std;

int main()
{
    int dlugosc;
    string wyraz;
    cout << "podaj wyraz: ";
    cin >> wyraz;
    dlugosc=wyraz.length();
    for(int i=dlugosc-1;i>=0;i--)
    {
        cout << wyraz[i];
    }
}
