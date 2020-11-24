/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();

inline void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<int> answer(n + 1);
    for (int i = 1; i <= n; ++i) {
        set<int> previous;
        int j = i, to_push = 0;
        while (true) {
            if (previous.find(j) != previous.end()) {
                to_push = j;
                break;
            }
            else {
                previous.insert(j);
                j = a[j];
            }
        }
        answer[i] = to_push;
    }
    for (int i : answer) {
        if (i != 0) cout << i << " ";
    }
}
signed main() {
    // OJ;
    solve();
    return 0;
}