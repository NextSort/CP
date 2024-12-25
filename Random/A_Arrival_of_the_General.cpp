#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pi pair<int, int>
#define F first
#define S second
#define PB push_back
#define len(s) (int)s.size()
#define print(x) cout << x << "\n"
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

template<typename S, typename T>
void smax(S &a, const T &b) { if (a < b) a = b; }

template<typename S, typename T>
void smin(S &a, const T &b) { if (a > b) a = b; }

const int MXN = 1e5 + 5, INF = 1e9 + 5;
ll mod = 1000000007;

void solve() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int max_height = *max_element(heights.begin(), heights.end());
    int max_pos = find(heights.begin(), heights.end(), max_height) - heights.begin();


    int min_height = *min_element(heights.begin(), heights.end());
    int min_pos = find(heights.rbegin(), heights.rend(), min_height) - heights.rbegin();
    min_pos = n - 1 - min_pos;


    int swaps = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) {
        swaps--;
    }

    cout << swaps << endl;
    

}

int32_t main() {
    FASTIO
    int t = 1;
    // cin>>t;   
    while (t--) {
        solve();
    }

    return 0;
}