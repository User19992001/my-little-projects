#include <iostream>
using namespace std;

int main()
{
    int sp,ep,sum=0;
    cout << "Enter start of period:";
    cin >> sp;
    cout << "Enter end of period:";
    cin >> ep;

    for (int i = sp; i <= ep; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
        }
    }
    cout << "the sum of odd numbers between " << sp << " & " << ep << " is: " << sum;
    
    return 0;
}
