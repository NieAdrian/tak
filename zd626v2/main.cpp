#include <iostream>

using namespace std;

int ile;

void ilepud();

int main()
{
    cin>>ile;
    for(int i=0; i<ile;i++)
        ilepud();
    return 0;
}
void ilepud()
{
    int ilosc,pudelko,czas,zjedzone=0;

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
}
