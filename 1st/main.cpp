#include <iostream>

using namespace std;

int uczniowie,x,y;
int ilosc;

int main()
{
    cout << "ilu uczniow jest w twojej klasie:" ;
    cin >> uczniowie;

    cout << "ile cukierkow kupila mama:";
    cin >> ilosc;

    x = ilosc/(uczniowie-1);
    cout << "cukierki dla kazdego:" <<x;
    cout << endl;
    y = ilosc-x*(uczniowie-1);
    cout << "cukierki dla jasia:" <<y;
    return 0;
}
