#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
    string password = "";


    for (int i = 0; i < n; ++i) {
        password += alphabet[i % k]; 
    }

    cout << password << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
