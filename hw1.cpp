#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a positive number:";
    cin >> n;
    
    if (n<0)
    {
        cout << n <<" isn't a positive number.";
    }
    else if (n==0)
    {
        cout << "0 is neither even nor odd.";
    }
    else if (n%2==0)
    {
        cout << n <<" is even.";
    }
    else
    {
        cout << n <<" is odd.";
    }
        
    return 0;
}
