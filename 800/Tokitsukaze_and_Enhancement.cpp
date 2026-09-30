/*
    Codeforces: A. Tokitsukaze and Enhancement
    Rating: 800
    Problem Type:
    - Modulo / Remainders
    - Casework
    - Implementation

    Implementation:
    Find x % 4.
    Depending on the remainder, print the required number of
    operations and the corresponding letter.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int rem = x % 4;

    if (rem == 1) {
        cout << 0 << ' ' << 'A' << endl;
    }
    else if (rem == 3) {
        cout << 2 << ' ' << 'A' << endl;
    }
    else if (rem == 2) {
        cout << 1 << ' ' << 'B' << endl;
    }
    else if (rem == 0) {
        cout << 1 << ' ' << 'A' << endl;
    }

    return 0;
}
