#include <iostream>
using namespace std;

int f (int , int &, int &);

int main()
{
    int n,r,c,s;
    cout << "enter number:" << endl;
    cin >> n;

    s = f(n,r,c);

    cout << "reverse:" << r << endl;
    cout << "char:" << c << endl;
    cout << "sum:" << s << endl;
    return 0;
}
int f (int n, int &r, int &c)
{
    int d , s=0;

    while (1)
    {
        d=n%10;
        n=n/10;
        s+=d;
        r=r*10+d;
        c++;

        if (n==0)
            break;
    }
    return s;
}
