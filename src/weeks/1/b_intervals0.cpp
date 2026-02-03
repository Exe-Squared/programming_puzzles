/**
 * Author: Ben Moses
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> hours(24, 0);

    /**
     * As the number of hours is fixed (24), we can use a brute force approach.
     *
     * This involves, for each interval, iterating through the hours array from hour
     * A to hour B and incrementing each value by one. Passing back over the array
     * and counting values >= k gives us our answer.
     *
     * The complexity of this approach reduces to O(n) (linear), as the size of the array is fixed.
     */
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j < b; j++) {
            hours[j]++;
        }
    }

    int count = 0;
    for (const int &h : hours) {
        if (h >= k) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}

