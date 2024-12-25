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

    string borze;
    cin >> borze;

    string result = "";
    for (size_t i = 0; i < borze.length(); i++)
    {
        if (borze[i] == '.')
        {
            result += '0';
        }
        else if (borze[i] == '-' && i + 1 < borze.length())
        {
            if (borze[i + 1] == '.')
            {
                result += '1';
                i++;
            }
            else if (borze[i + 1] == '-')
            {
                result += '2';
                i++;
            }
        }
    }

    cout << result << endl;
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