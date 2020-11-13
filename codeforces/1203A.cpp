/*
author-sesky_crocdile
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
    deque<int> a(n);
    int pos;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            pos = i;
        }
    }
    if (a[pos + 1] == 2) {
        int j = 0;
        int temp;
        while (a[j] != 1) {
            temp = a[j];
            a.pop_front();
            a.push_back(temp);
        }
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] != 1) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else {
        int j = n - 1;
        int temp;
        while (a[j] != 1) {
            temp = a[j];
            a.pop_back();
            a.push_front(temp);
        }
        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i + 1] - a[i]) != 1) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}