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
    int n, k;

    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<int> cnt = {1};
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt.back()++;
        }
        else
        {
            cnt.emplace_back(1);
        }
    }

    sort(cnt.begin(), cnt.end());

    int m = cnt.size();

    for (int i = 0; i < m - 1; i++)
    {
        if (cnt[i] > k)
        {
            cout << m - i << "\n";
            return;
        }
        k -= cnt[i];
    }
    cout << 1 << "\n";
}

int32_t main()
{
    FASTIO
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}