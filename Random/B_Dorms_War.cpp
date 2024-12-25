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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        int k;
        cin >> k;

        vector<bool> special(26, false);
        for (int i = 0; i < k; i++) {
            char c;
            cin >> c;
            special[c - 'a'] = true;
        }

        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (special[arr[i] - 'a'])
                idx = i;
        }

        int max_distance = 0;
        for (int i = idx - 1; i >= 0; i--) {
            int j = i;
            while (j > 0 && !special[arr[j] - 'a'])
                j--;
            max_distance = max(max_distance, i + 1 - j);
            i = j;
        }

        cout << max_distance << '\n';
    }

    return 0;
}
