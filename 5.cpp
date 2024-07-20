#include <iostream>

using namespace std;

int main() {
    int size = 1;
    cout << "Enter the size of araays:" << endl;
    cin >> size;
    int array1[size], array2[size], sum[size];

    cout << "Enter elements for the first array:" << endl;

    for (int i = 0; i < size; i++) {
        cin >> array1[i];
    }

    cout << "Enter elements for the second array:" << endl;

    for (int i = 0; i < size; i++) {
        cin >> array2[i];
    }

    for (int i = 0; i < size; i++) {
        sum[i] = array1[i] + array2[i];
    }

    cout << "The sum of the two arrays is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}
