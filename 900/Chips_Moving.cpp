/*
    Codeforces: A. Chips Moving
    Rating: 800

    Problem Type:
    - Parity
    - Counting
    - Greedy / Observation

    Implementation:
    Count how many chips are on odd positions and how many
    are on even positions.
    
    Moving a chip by 2 costs 0, so all chips can effectively
    be moved to any position with the same parity.
    Therefore, the answer is the minimum of the number of
    odd-position chips and even-position chips.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int coins = 0;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int odd = 0;
    int even = 0;

    for (int x : a) {
        if (x % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << min(odd, even);

    return 0;
}
