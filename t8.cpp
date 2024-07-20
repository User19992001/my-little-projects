#include <iostream>
using namespace std;

int main()
{
    int n,a=0,s=0;
    cout <<"enter the number:";
    cin >> n;

    while (n>0)
    {
        a = n%10;
        s += a;
        n = n/10;
    }
    
    cout << "the answer is: " << s;
    
    return 0;
}
