#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cout << "enter numbers:" << endl;
    cin>>n;
    while(n != 0)
    {
        while(n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        cin>>n;
    }
    cout<<"Sum of digits of input numbers: "<<sum;
    return 0;
}