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
void getnumbers(int n) {
    vector<int> divisor;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            divisor.push_back(i);
            n /= i;
        }
    } 
    if (n != 1) {
        divisor.push_back(n);
    }
    int a, b, c, size;
    a = b = c = 1;
    size = divisor.size();
    for (int i = 0; i < size; i++) {
        if (a == 1) a = a * divisor[i];
        else if (b == 1 || b == a) b = b * divisor[i];
        else c = c * divisor[i];
    }
    if (a == 1 || b == 1 || c == 1 || a == b || b == c || a == c) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        cout << a << ' ' << b << ' ' << c << endl;
    }
}
void solve() {
    int n; cin >> n;
    getnumbers(n);
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}