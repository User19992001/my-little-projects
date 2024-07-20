#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;

    if (a>b)
    {
        if (a>c)
        {
            cout << "biggest Number is: " << a;
        }
        else if (c>a)
        {
            cout << "biggest Number is: " << c;
        }
    }
    else if (b>c)
    {
        cout << "biggest Number is: " << b;
    }
    else
        cout << "biggest Number is: " << c;
         
    return 0;
}
