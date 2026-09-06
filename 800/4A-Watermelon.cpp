/*
    Codeforces 4A - Watermelon

    Rating: 800
    Topic: Math / Implementation

    Approach:
    A watermelon can be divided into two positive even parts
    if and only if n is even and greater than 2.

    So we check:
        n > 2 && n % 2 == 0

    If true, print "YES", otherwise print "NO".

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 2 && n % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
