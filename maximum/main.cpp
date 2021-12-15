#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cout << "podaj trzy liczby rozdzielone spacja: " << endl;
    cin >> a >> b >> c;

    int m = a;

    if (m<b) m=b;

    if (m<c) m=c;

    cout << "najwieksza liczba to: " << m;





/*
    if ((a>=b) && (a>=c))

        cout << "najwieksza liczba to: " << a;

    else if((b>=c)&&(b>=a))

        cout << "najwieksza liczba to: " << b;

    else if((c>=b)&&(c>=a))

        cout << "najwieksza liczba to: " << c;

    else
        cout << "blad";

*/

    return 0;
}
