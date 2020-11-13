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
void recursion(unordered_set<int>&s, int n) {
    if (s.find(n) != s.end()) {
        return;
    }
    s.insert(n);
    n++;
    while (n % 10 == 0) {
        n /= 10;
    }
    recursion(s, n);
}
void solve() {
    int n;
    cin >> n;
    unordered_set<int> s;
    recursion(s, n);
    cout << s.size() << endl;
}
signed main() {
    solve();
    return 0;
}