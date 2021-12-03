#include <iostream>
#include <iomanip>
using namespace std;
long double fib[100000];
int ile;
int main()
{
    //cout << "ile liczb fiboncziego wypisac" << endl;
    cin >> ile;

    fib[0]=1;
    fib[1]=1;
    cout<< setprecision(10000);

    for (int i=2; i<ile;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    //for (int i=0;i<ile;i++)
    // {
    //     cout <<"nr liczby:"<<i+1<<" "<<fib[i]<<endl;
    // }
    //cout<< "numer: "<<ile<<" to: "<<fib[ile-1];

    cout<<"zlota liczba " <<  fib[ile-1]/fib[ile-2];
    return 0;
}
