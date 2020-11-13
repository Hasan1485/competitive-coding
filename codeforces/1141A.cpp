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
vector<int> primeFactors(int n) {
    vector<int> v;
    while (n % 2 == 0) {
        v.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            v.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        v.push_back(n);
    return v;
}
void solve() {
    int n, m;
    cin >> n >> m;
    if (m % n) {
        cout << -1 << endl;
        return;
    }
    vector<int> p = primeFactors(m / n);
    for (int i = 0; i < p.size(); ++i) {
        if (p[i] != 2 && p[i] != 3) {
            cout << -1 << endl;
            return;
        }
    }
    cout << p.size() << endl;
}
signed main() {
    solve();
    return 0;
}