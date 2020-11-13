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
int MinDigit(int n) {
    int smallest = 9;
    while (n) {
        int r = n % 10;
        smallest = min(r, smallest);
        n = n / 10;
    }
    return smallest;
}
int MaxDigit(int n) {
    int largest = 0;
    while (n) {
        int r = n % 10;
        largest = max(r, largest);
        n = n / 10;
    }
    return largest;
}
void solve() {
    int a, k;
    cin >> a >> k;
    int cur = 1;
    bool once = 0;
    while (cur < k) {
        cur++;
        if (MinDigit(a) == 0) {
            break;
        }
        if (!once) {
            a += MinDigit(a) * MaxDigit(a);
        }
    }
    cout << a << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}