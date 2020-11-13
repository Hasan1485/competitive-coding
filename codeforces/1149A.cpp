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
    vector<int> a(n);
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] == 1 ? cnt1++ : cnt2++;
    }
    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            if (cnt2 > 0) {
                cnt2--;
                cout << 2 << " ";
            }
            else {
                cnt1--;
                cout << 1 << " ";
            }
            continue;
        }
        else if (i == 1) {
            if (cnt1 > 0) {
                cnt1--;
                cout << 1 << " ";
            }
            else {
                cnt2--;
                cout << 2 << " ";
            }
            continue;
        }
        if (c == 0) {
            ++c;
            while (cnt2 > 0) {
                cnt2--;
                cout << 2 << " ";
            }
        }
        if (c == 1) {
            while (cnt1 > 0) {
                cnt1--;
                cout << 1 << " ";
            }
        }
    }
}
signed main() {
    solve();
    return 0;
}