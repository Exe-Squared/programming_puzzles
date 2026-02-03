/**
 * Author: Ben Moses
 */

/**
 * Avoid this in a production setting, but this includes the entire standard library.
 * Use this for convenience when compile time doesn't matter.
 */
#include <bits/stdc++.h>

/**
 * This allows us to avoid prefixing everything from the standard library with std::
 * Again, don't do this in a production setting, it is purely for readability.
 */
using namespace std;

/**
 * The winner will be the contestant with the maximum sum over their grades,
 * so we can simply sum each line in turn and track the current winner.
 *
 * This is designed to be an introductory problem, and it therefore has a small,
 * constant sized input. This means that we do not have to worry about complexity or
 * efficiency - the solution just needs to be correct.
 *
 * We are told that the solution is guaranteed to be unique, so we do not need to
 * handle equal grade sums.
 *
 * We also do not need to handle edge cases, such as there being no contestants or
 * unequal grade counts between contestants.
 */
int main() {
    /**
     * These variables will track the current winner and their score.
     * We could initialise these to the values for the first participant, however using -1
     * here simplifies our loop.
     */
    int result = -1;
    int maxGrade = -1;

    // Starting the loop at 1 here matches the expected output (1-indexed)
    for (int i = 1; i <= 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int x;
            cin >> x; // This is how you read space-separated input from stdin in c++
            sum += x;
        }
        if (sum > maxGrade) {
            maxGrade = sum;
            result = i;
        }
    }
    cout << result << " " << maxGrade << "\n";
    return 0;
}
