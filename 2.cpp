#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    int count = 0;
    double average = 0;

    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
            count++;
        }
    }
    average = (double)sum / count;
    
    cout << "The Average of divisors of " << number << " is: " << average << endl;

    return 0;
}