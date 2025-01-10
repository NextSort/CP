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

int min_rest_days(int n, vector<int> activities)
{
    vector<vi> dp(n + 1, vi(3, INT_MAX));

    dp[0][0] = 0; // Rest before day 1

    REP(i, 1, n)
    {
        int act = activities[i - 1];

        // Rest
        dp[i][0] = min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + 1;

        // Contest
        if (act == 1 || act == 3)
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }

        // Gym
        if (act == 2 || act == 3)
        {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
    }

    // Return the minimum rest days
    return min({dp[n][0], dp[n][1], dp[n][2]});
}

void solve()
{
    int n; // Days
    cin >> n;

    vi activities(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> activities[i];
    }

    cout << min_rest_days(n, activities) << endl;
}

int32_t main()
{
    FASTIO
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
