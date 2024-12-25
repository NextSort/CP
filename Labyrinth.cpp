#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>
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
vs grid;
bool visited[MAX][MAX];

// directions
int dx[] = {0, 0, -1, 1};        
int dy[] = {-1, 1, 0, 0};        // Left, Right, Up, Down
char direction[] = {'L', 'R', 'U', 'D'}; 


bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !visited[x][y];
}

void bfs(int n, int m) {
    pi A, B;
    REP(i, 0, n - 1) {
        REP(j, 0, m - 1) {
            if (grid[i][j] == 'A') A = {i, j};
            if (grid[i][j] == 'B') B = {i, j};
        }
    }

    
    queue<pi> q;
    visited[A.first][A.second] = true;
    q.push(A);

    // Store the parent and direction for each cell
    vector<vector<pi>> parent(n, vector<pi>(m, {-1, -1}));
    
    vector<vector<char>> moveDir(n, vector<char>(m, ' '));

    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();

        // If we've reached the end, reconstruct the path
        if (x == B.first && y == B.second) {
            vector<char> path;
            while (parent[x][y].F != -1) { 
                path.push_back(moveDir[x][y]);
                int px = parent[x][y].F;
                int py = parent[x][y].S;
                x = px;
                y = py;
            }

            reverse(path.begin(), path.end()); // Reverse to get the correct path

            cout << "YES" << endl;
            cout << path.size() << endl;
            for (char c : path) cout << c;
            cout << endl;
            return;
        }

        // Explore all four directions
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (isValid(nx, ny, n, m)) {
                visited[nx][ny] = true;
                parent[nx][ny] = {x, y};
                moveDir[nx][ny] = direction[i];
                q.push({nx, ny});
            }
        }
    }


    cout << "NO" << endl;
}

void solve() {
    int n, m;
    cin >> n >> m;

    grid.resize(n);
    REP(i, 0, n - 1) {
        cin >> grid[i];
    }

    memset(visited, false, sizeof(visited)); 

    bfs(n, m);
}

int32_t main() {
    FASTIO
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
    