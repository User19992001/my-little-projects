#include <iostream>
using namespace std;

int main()
{
    cout << 2 << '\t';

    for (int i = 3; i <= 1000; i++)
    {
        bool Prime = true;

        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                Prime = false;
                break;
            }
        }

        if (Prime)
        {
            cout << i << '\t';
        }
    }

    return 0;
}