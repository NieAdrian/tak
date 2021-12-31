#include <iostream>
#include <time.h>
using namespace std;

clock_t start, stop;
double czas;
long int wynik=1;
long int potega(int p,int w)
{
    if(w==0)return 1;
    else return p*potega(p,w-1);
}
int main()
{
    int p,w;
    cout<<"podaj podstawe: ";
    cin>>p;
    cout<<"podaj potege: ";
    cin>>w;
    start=clock();
    cout<<potega(p,w)<<endl;
    stop=clock();
    czas = (double)(stop - start)/CLOCKS_PER_SEC;
    cout<<"ilosc czasu rekurencyjnie: "<<czas<<endl;
    start=clock();
    while(w>0)
    {
        wynik=wynik*p;
        w--;
    }
    cout<<wynik<<endl;
    stop=clock();
    czas = (double)(stop - start)/CLOCKS_PER_SEC;
    cout<<"ilosc czasu iteracyjnie: "<<czas<<endl;
    return 0;
}

