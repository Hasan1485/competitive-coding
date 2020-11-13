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
void solve() {
    int n;
    cin >> n;
    int a[n];
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx + 1, a[i]);
    }
    string s(mx, 'a');
    int temp;
    cout << s << endl;
    for (int i = 0; i < n; i++) {
        temp = a[i];
        if (s[temp] == 'a')
            s[temp] = 'b';
        else if (s[temp] == 'b')
            s[temp] = 'a';
        cout << s << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}