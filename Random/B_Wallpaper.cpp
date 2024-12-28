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

void solve()
{
    int n; // rooms
    cin >> n;

    vector<tuple<int, int, int>> rooms(n);
    for (auto& room : rooms)
    {
        cin >> get<0>(room) >> get<1>(room) >> get<2>(room);
    }

    int m; // wallpapers
    cin >> m;

    vector<tuple<int, int, int>> wallpapers(m);
    for (auto& wallpaper : wallpapers)
    {
        cin >> get<0>(wallpaper) >> get<1>(wallpaper) >> get<2>(wallpaper);
    }

    int total_cost = 0;

    for (const auto& room : rooms)
    {
        int l, w, h;
        tie(l, w, h) = room;

        int perimeter = 2 * (l + w); // perimeter
        int min_cost = INT_MAX;

        for (const auto& wallpaper : wallpapers)
        {
            int roll_length, roll_width, price;
            tie(roll_length, roll_width, price) = wallpaper;

            // If the roll length is less than the room height, can't use this roll
            if (roll_length < h) continue;

            int strips_per_roll = roll_length / h;

            // Total width covered by one roll
            int strips_width = strips_per_roll * roll_width;

            // Rolls required to cover the perimeter
            int rolls_required = (perimeter + strips_width - 1) / strips_width;

            int cost = rolls_required * price;


            min_cost = min(min_cost, cost);
        }

        total_cost += min_cost;
    }

    cout << total_cost << endl;
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