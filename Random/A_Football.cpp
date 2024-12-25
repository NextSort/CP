#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<string, int> scoreMap;

    for (int i = 0; i < n; ++i) {
        string team;
        cin >> team;
        scoreMap[team]++;
    }
    string winner;
    int maxGoals = 0;
    for (const auto& entry : scoreMap) {
        if (entry.second > maxGoals) {
            maxGoals = entry.second;
            winner = entry.first;
        }
    }

    cout << winner << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
