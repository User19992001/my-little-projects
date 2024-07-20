#include <iostream>

using namespace std;

int main() {
    const int numScores = 100;
    int scores[numScores];
    int frequency[101] = {0};

    cout << "Enter 100 scores:";
    
    for (int i = 0; i < numScores; i++) {
        cin >> scores[i];
        frequency[scores[i]]++;
    }

    int maxFrequency = 0;
    int mostRepeatedScore = 0;
    for (int i = 0; i <= 100; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostRepeatedScore = i;
        }
    }

    cout << "The score that has been repeated the most is: " << mostRepeatedScore << endl;

    return 0;
}
