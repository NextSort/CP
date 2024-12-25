#include <iostream>
using namespace std;

void solve() {
    int n;              
    cin >> n;

    int first_score;
    cin >> first_score;

    int max_score = first_score;
    int min_score = first_score;
    int amazing_count = 0;

    for (int i = 1; i < n; i++) {
        int score;
        cin >> score;


        if (score > max_score) {
            amazing_count++;      
            max_score = score;    
        }

        else if (score < min_score) {
            amazing_count++;      
            min_score = score;    
        }
    }

    cout << amazing_count << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
