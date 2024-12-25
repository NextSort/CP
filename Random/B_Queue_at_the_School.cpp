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
    int n, t;
    string s;
    cin >> n >> t >> s;

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s << endl;
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