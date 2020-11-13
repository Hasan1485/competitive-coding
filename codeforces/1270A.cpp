/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int a[k1];
        int b[k2];
        set<int> s;
        int mx = 0;
        for (int i = 0; i < k1; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
            s.insert(a[i]);
        }
        for (int i = 0; i < k2; i++) {
            cin >> b[i];
            mx = max(mx, b[i]);
        }
        if (s.find(mx) != s.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}