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
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    // Map to store coordinates of each vertex
    unordered_map<int, pair<int, int>> vertexCoordinates;

    // Array to store edges of the cactus
    vector<pair<int, int>> edges(m);

    for (int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        edges[i] = {v, u};
    }

    bool valid = true;

    // Iterate through each edge and assign coordinates
    for (auto edge : edges)
    {
        int v = edge.first;
        int u = edge.second;

        if (vertexCoordinates.find(v) == vertexCoordinates.end())
        {
            // Assign coordinates (0, i) or (1, i) based on the parity of i
            int i = vertexCoordinates.size();
            int x = i % 2;
            int y = i / 2;
            vertexCoordinates[v] = {x, y};
        }

        if (vertexCoordinates.find(u) == vertexCoordinates.end())
        {
            // Assign coordinates (0, i) or (1, i) based on the parity of i
            int i = vertexCoordinates.size();
            int x = i % 2;
            int y = i / 2;
            vertexCoordinates[u] = {x, y};
        }

        // Check if assigned coordinates match the parity of i
        if (abs(vertexCoordinates[v].first - vertexCoordinates[u].first) % 2 != 1)
        {
            valid = false;
            break;
        }
    }

    if (!valid)
    {
        cout << "No" << endl;
        // continue;
    }

    // Print the result
    cout << "Yes" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (vertexCoordinates.find(i) != vertexCoordinates.end())
        {
            cout << vertexCoordinates[i].first << " " << vertexCoordinates[i].second << endl;
        }
    }
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