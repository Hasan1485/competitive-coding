/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin);
using namespace std;
int sum(int n) {
    int m, sum = 0;
    while (n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}
void solve() {
    int n;
    cin >> n;
    int c = floor(log10(n)) + 1;
    int p = pow(10, c - 1);
    int a = ((n / p) * p) - 1;
    int b = n - a;
    cout << sum(a) + sum(b) << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}