#include <iostream>

using namespace std;

int ile,ilosc,pudelko,czas,zjedzone=0;

int main()
{
    cin>>ile;
    cin>>ilosc>>pudelko;

    for(int i=0;i<ilosc;i++)
    {
        cin>>czas;
        zjedzone+=86400/czas;
    }
    if(zjedzone>(zjedzone/pudelko)*pudelko)
        cout<<(zjedzone/pudelko)+1;
    else
        cout<<zjedzone/pudelko;

    cout<<endl;
    cin>>ilosc>>pudelko;
    zjedzone=0;

    for(int i=0;i<ilosc;i++)
    {
        cin>>czas;
        zjedzone+=86400/czas;
    }
    if(zjedzone>(zjedzone/pudelko)*pudelko)
        cout<<(zjedzone/pudelko)+1;
    else
        cout<<zjedzone/pudelko;
    return 0;
}
