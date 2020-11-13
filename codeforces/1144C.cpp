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
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto i : mp) {
        if (i.second > 2) {
            cout << "NO" << endl;
            return;
        }
    }
    sort(a, a + n);
    int flip = 0;
    vector<int> c;
    vector<int> d;
    for (int i = 0; i < n; i++) {
        if (flip == 0) {
            if (i < n - 1 && a[i] == a[i + 1]) flip = 1;
            c.push_back(a[i]);
        }
        else {
            if (i < n - 1 && a[i] == a[i + 1]) flip = 0;
            d.push_back(a[i]);
        }
    }
    sort(c.begin(), c.end()), sort(d.rbegin(), d.rend());
    cout << "YES" << endl;
    cout << c.size() << endl;
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    cout << d.size() << endl;
    for (int i =0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout << endl;
}
signed main() {
    solve();
    return 0;
}