#include <iostream>
using namespace std;

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);


int main() {
    FASTIO
    int n;
    cin >> n;

    int solved_count = 0; 

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya; 

        if (petya + vasya + tonya >= 2) {
            solved_count++;
        }
    }


    cout << solved_count << endl;

    return 0;
}
