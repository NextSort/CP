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

void solve() {
  
      int n;
    cin >> n;
    string a;
    cin >> a;


    unordered_map<char, string> factor_map = {
        {'0', ""}, {'1', ""},
        {'2', "2"}, {'3', "3"},
        {'4', "322"}, {'5', "5"},
        {'6', "53"}, {'7', "7"},
        {'8', "7222"}, {'9', "7332"}
    };


    string result = "";
    for (char digit : a) {
        result += factor_map[digit];
    }

    // Sort digits in descending order to form the maximum number
    sort(result.rbegin(), result.rend());
    
    // Output the result
    cout << result << endl;

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