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

const int MAX = 1000;
vector<string> grid;
bool visited[MAX][MAX];
int dx[] = {0, 0, -1, 1}; // Directions: left, right, up, down
int dy[] = {-1, 1, 0, 0};

// Check if a cell is valid and not visited
bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y];
}

// Depth-First Search to explore a room
void dfs(int x, int y, int n, int m) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny, n, m)) {
            dfs(nx, ny, n, m);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    grid.resize(n);
    REP(i, 0, n - 1) {
        cin >> grid[i];
    }

 
    memset(visited, false, sizeof(visited));

    int roomCount = 0;

    REP(i, 0, n - 1) {
        REP(j, 0, m - 1) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                roomCount++;
                dfs(i, j, n, m);
            }
        }
    }

    cout << roomCount << endl;
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
