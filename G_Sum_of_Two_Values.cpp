#include <bits/stdc++.h>
using namespace std;

#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for (ll i = (a); (i) < (b); (i)++)
#define FORN(i, a, b) for (ll i = (a); (i) <= (b); (i)++)
#define ROF(i, a, b) for (ll i = (a); (i) > (b); (i)--)
#define REP(i, n) FOR(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define eb emplace_back
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
template <typename T>
using vv = vector<vector<T>>;
template <typename T>
using vvv = vector<vv<T>>;
template <typename T, typename N>
using um = unordered_map<T, N>;
template <typename T>
using MinHeap = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using MaxHeap = priority_queue<T>;

const ll MOD[] = {999727999, 1070777777, 1000000007, 998244353};
mt19937_64 rng(chrono::system_clock::now().time_since_epoch().count());
const int M = MOD[2];
const int inf = (int)1e9;
const ll INF = 1e18;

vector<int> solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int complement = x - a[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement] + 1, i + 1};
        }
        mp[a[i]] = i;
    }

    return {}; // Return empty if no solution found
}

int main() {
    IO
    int t = 1;
    // cin >> t; 
    while (t--) {
        vector<int> result = solve();
        if (!result.empty()) {
            cout << result[0] << " " << result[1] << endl;
        } else {
            cout << "No solution found" << endl;
        }
    }

    return 0;
}
