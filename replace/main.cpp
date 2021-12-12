#include <iostream>
#include <string>
using namespace std;

int main()
{
    string napis = "ala ma kota";
    napis.replace(4,2,"nie ma");
    cout << napis;
    return 0;
}
