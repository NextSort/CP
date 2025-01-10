#include <bits/stdc++.h>
using namespace std;

void solve() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    string combined = guest + host;

    // Frequency counts
    unordered_map<char, int> freq_combined, freq_pile;

    for (char c : combined) freq_combined[c]++;
    for (char c : pile) freq_pile[c]++;

    // Check if both frequencies are equal
    if (freq_combined == freq_pile) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
