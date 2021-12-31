#include <iostream>
#include "fun.h"
using namespace std;

int main()
{
    int a=5;
    cout<<"przed: "<<&a<<endl;
    zmien(&a);
    cout<<"po: "<<&a<<endl<<endl;

    int tab[]={5};
    cout<<"przed: "<<tab<<endl;
    zmien(tab);
    cout<<"po: "<<tab<<endl;

    return 0;
}

void zmien(int *x)
{
    *x=-1;
    cout<<"funkcja: "<<x<<endl;
}


