#include <iostream>
using namespace std;

int countWaysToReachTop(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;

    // Initialize the variables for the base cases
    int prev2 = 1; // Ways to reach the step n-2
    int prev1 = 1; // Ways to reach the step n-1
    int current = 0; // Ways to reach the current step

    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = countWaysToReachTop(n);
    cout << "Number of ways to reach the top: " << ways << endl;

    return 0;
}
