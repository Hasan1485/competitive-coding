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
int getIndex(vector<int> v, int K) {
    auto it = find(v.begin(), v.end(), K);
    int index = distance(v.begin(), it);
    return index;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll x = 0, y = 0;
    ll mn, mx;
    ll big = n - 1, small = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            mn = a[small];
            small++;
            y += mn;
        }
        else {
            mx = a[big];
            big--;
            x += mx;
        }
    }
    ll ans = (x * x) + (y * y);
    cout << ans << endl;
    return 0;
}