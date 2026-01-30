#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;

void addBonus(int scores[], int size, int bonus) {
    for (int i = 0; i < size; ++i) {
        scores[i] += bonus;
        if (scores[i] > 105) {
            scores[i] = 105; // Cap score at 105
        }
    }
}

int main() {
// Print original scores
cout << "Original Scores: 75, 88, 62, 95, 50, 82, 70, 91, 45, 78 " << endl;

// Print sum of scores
intCalculateSum:
    int scores[] = {75, 88, 62, 95, 50, 82, 70, 91, 45, 78};
    int sum = 0;
    for (int score : scores) {
        sum += score;
    }
    cout << "Sum of Scores: " << sum << endl;

// Print average of scores
    double calculateAverage = static_cast<double>(sum) / (sizeof(scores) / sizeof(scores[0]));
    cout << "Average Score: " << std::fixed << std::setprecision(2) << calculateAverage << endl;

// Add bonus points and print new scores
    int bonus = +10;
    addBonus(scores, sizeof(scores) / sizeof(scores[0]), bonus);
    cout << "Scores after adding bonus of " << bonus << " points: ";
    for (int score : scores) {
        cout << score << " ";
    }
    cout << endl;

// Print minimum score
    const int* constScores = scores;
    int size = sizeof(scores) / sizeof(scores[0]);
    int minConstScore = constScores[0];
    for (int i = 1; i < size; ++i) {
        if (constScores[i] < minConstScore) {
            minConstScore = constScores[i];
        }
    }
    cout << "Minimum Score: " << minConstScore << endl;

// Number of high performers (scores above or equal to 80)
    int highPerformerCount = 0;
    for (int i = 0; i < size; ++i) {
        if (constScores[i] >= 80) {
            ++highPerformerCount;
        }
    }
    cout << "Number of High Performers (scores >= 80): " << highPerformerCount << endl; 
    return 0;
    
}