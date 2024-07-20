#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number:";
    cin >> n;
    if (n<0)
    {
        cout << "can't check negative numbers.";
    }
        else if (n==0 || n==1)
        {
            cout << "can't check 0 & 1.";
        }
            else if (n==2)
            {
                cout << "2 is a prime number.";
            }
                else for (int i = 2; i <= n/2; i++)
                {
                    if (n%i==0)
                    {
                        cout << n << " is not a prime number.";
                        exit(0);
                    }
                }
                cout << n << " is a prime number.";
    return 0;
}
