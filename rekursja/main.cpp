#include <iostream>

using namespace std;

int p;
int i;
int a;
int f(int n)
{
    if(n==0)return 3;
    else return f(n-1)+2;
}

long int potega(int p, int i)
{
    if(i==0)return 1;
    else return p*potega(p,i-1);
}

long int fib(int a)
{
    if((a==1)||(a==2))return 1;
    else return fib(a-1)+fib(a-2);
}

long int silnia(int a)
{
    if(a==1)return a;
    else return a*silnia(a-1);
}
int main()
{
    cin>>a;
    cout<<silnia(a);
    return 0;
}
