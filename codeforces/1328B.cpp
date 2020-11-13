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
const int MAX_CHAR = 26;
const int MAX_FACT = 20;
int fact[MAX_FACT];
void precomputeFactorials() {
    fact[0] = 1;
    for (int i = 1; i < MAX_FACT; i++)
        fact[i] = fact[i - 1] * i;
}
void solve() {
    int n, k;
    cin >> n >> k;
    char s[n];
    for (int i = 0; i < n - 2; ++i) {
        s[i] = 'a';
    }
    s[n - 2] = s[n - 1] = 'b';
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}