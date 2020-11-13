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
bool isPowerOfTwo(int n) {
    if (n == 2) {
        return false;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPrime(int n) {
    if (n < 3) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    string f = "Ashishgup";
    string s = "FastestFinger";
    if (n % 2 && n != 1) {
        cout << f << endl;
        return;
    }
    if (n == 1 || isPowerOfTwo(n) || isPrime(n / 2)) {
        cout << s << endl;
        return;
    }
    cout << f << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}