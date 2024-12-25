#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void bfs_escape_well(int n, const vector<int>& a, const vector<int>& b) {
    
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    bfs_escape_well(n, a, b);
}

int main() {
    FASTIO
    solve();
    return 0;
}
