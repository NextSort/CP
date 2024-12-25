#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // Handle edge case for n = 2
    if (n == 2) {
        cout << -1 << endl;
        return;
    }

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        a[i] = i;
        b[i] = i;
        c[i] = (2 * i) % n;
    }

    // Output the permutations
    for (int x : a) cout << x << " ";
    cout << endl;
    for (int x : b) cout << x << " ";
    cout << endl;
    for (int x : c) cout << x << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
