#include <iostream>

using namespace std;

float a, b, c, d, e, srednia, a1, b1, c1, d1, e1, m, x;



int main()
{
    x = -1;
    cout << "podaj 5 liczb rozdzielonych spacja: " << endl;
    cin >> a >> b >> c >> d >> e;

    srednia = (a+b+c+d+e)/5;
    cout << "srednia" << srednia << endl;

    a1 = srednia - a;
    if (a1<0)
    a1 = a1 * x;
    m = a1;

    b1 = srednia - b;
    if (b1<0)
    {
      b1 = b1 * x;
    }
    if (b1<m)
    {
        m = b1;
    }

    c1 = srednia - c;
    if (c1<0)
    {
        c1 = c1 * x;
    }
    if (c1<m)
    {
        m = c1;
    }

    d1 = srednia - d;
    if (d1<0)
    {
        d1 = d1 * x;
    }
    if (d1<m)
    {
        m = d1;
    }

    e1 = srednia - e;
    if (e1<0)
    {
        e1 = e1 * x;
    }
    if (e1<m)
    {
        m = e1;
    }

    cout << "najblizsze liczby to: " << endl;

    if(m==a1)
        cout << a << endl;
    if(m==b1)
    {
        if((b!=a)&&(b!=c)&&(b!=d)&&(b!=e))
        cout << b << endl;
    }

    if(m==c1)
    {
        if((c!=a)&&(c!=b)&&(c!=d)&&(c!=e))
        cout << c << endl;
    }
    if(m==d1)
    {
        if((d!=a)&&(d!=b)&&(d!=c)&&(d!=e))
        cout << d << endl;
    }
    if(m==e1)
    {
        if((e!=a)&&(e!=b)&&(e!=c)&&(e!=d))
        cout << e << endl;
    }

    return 0;
}








