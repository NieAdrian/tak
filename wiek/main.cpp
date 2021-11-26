#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "ile masz lat: ";
    cin >> wiek;
    if(wiek<=17)
    {
        cout << "nie jestes pelnoletni";
    }
    else if((wiek>=18)&&(wiek<35))
    {
        cout << "nie mozesz zostac prezydentem ale jestes pelnoletni";
    }
    else
    {
        cout << "mozesz zostac prezydentem";
    }

    return 0;
}
