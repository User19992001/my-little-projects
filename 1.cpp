#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    cout << "The sum of divisors of " << number << " is: " << sum << endl;

    return 0;
}