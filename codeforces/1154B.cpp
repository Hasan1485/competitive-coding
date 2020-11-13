/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s.insert(a[i]);
    } 
    if (s.size() > 3) {
        cout << -1 << endl;
        return;
    }
    vector<int> v;
    for (auto i : s) {
        v.push_back(i);
    }
    if (v.size() == 1) {
        cout << 0 << endl;
        return;
    }
    else if (v.size() == 2) {
        if ((v[1] - v[0]) % 2){
            cout << v[1] - v[0] << endl;
        }
        else {
            cout << (v[1] - v[0]) / 2 << endl;
        }
    }
    else {
        if (abs(v[0] - v[1]) == abs(v[1] - v[2])) {
            cout << v[1] - v[0];
            return;
        }
        cout << -1 << endl;
    }
}
signed main() {
    solve();
}