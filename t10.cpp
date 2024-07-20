#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,d,x1,x2;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;

    d = b*b-4*a*c;

    if (d<0)
    {
        cout << "There is no real root.";
    }
    else if (d==0)
    {
        x1 = -b/2*a;
        cout << "The answer is: " << x1;
    }
    else if (d>0)
    {
        x1 = (-b - sqrt(d))/(2*a);
        x2 = (-b + sqrt(d))/(2*a);
        cout << "The first answer is: " << x1 << endl;
        cout << "The second answer is: " << x2 << endl;
    }
    
    return 0;
}
