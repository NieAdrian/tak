#include <iostream>

using namespace std;

float oceny[5]; float suma=0, srednia;

int main()
{
    cout << "podaj swoje oceny" << endl;
    for(int i=0;i<5;i++)
    {
        cin>>oceny[i];
        suma+=oceny[i];
    }

    srednia= suma/5;
    cout<< "twoja srednia to "<<srednia;
    return 0;
}
