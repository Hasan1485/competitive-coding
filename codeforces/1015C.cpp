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
    int n, required_sum;
    cin >> n >> required_sum;
    vector<int> dif;
    int current_sum = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        current_sum += a;
        dif.push_back(a - b);
    }
    sort(dif.rbegin(), dif.rend());
    if (current_sum <= required_sum) {
        cout << 0 << endl;
        return;
    }
    int subtracting = current_sum;
    for (int i = 0; i < n; ++i) {
        subtracting -= dif[i];
        if (subtracting <= required_sum) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}
signed main() {
    // OJ;
    solve();
    return 0;
}