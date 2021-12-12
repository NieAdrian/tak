#include <iostream>
#include <string>
using namespace std;

int main()
{
    string napis = "ala ma kota";
    string nowy = napis.substr(4,7);

    cout << nowy;
    return 0;
}
