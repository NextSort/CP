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
#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

template <typename S, typename T>
void smax(S &a, const T &b)
{
    if (a < b)
        a = b;
}

template <typename S, typename T>
void smin(S &a, const T &b)
{
    if (a > b)
        a = b;
}

const int MXN = 1e5 + 5, INF = 1e9 + 5;
ll mod = 1000000007;

void solve()
{
    int presses[3][3];
    int result[3][3] = {0}; 
				

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> presses[i][j];
        }
    }


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int toggles = presses[i][j];  
            if (i > 0) toggles += presses[i - 1][j];  
            if (i < 2) toggles += presses[i + 1][j];  
            if (j > 0) toggles += presses[i][j - 1];  
            if (j < 2) toggles += presses[i][j + 1];  


            result[i][j] = (toggles % 2 == 0) ? 1 : 0;  
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result[i][j];
        }
        cout << endl;
    }


}

int32_t main()
{
    FASTIO
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
