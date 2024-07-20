#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    int temp = number;
    
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "The sum of digits of " << number << " is: " << sum << endl;

    return 0;
}