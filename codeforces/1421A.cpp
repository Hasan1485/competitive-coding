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
int findX(int A, int B) {
    int j = 0, x = 0;
    while (A || B) { 
        if ((A & 1) && (B & 1)) {
            x += (1 << j);
        }
        A >>= 1;
        B >>= 1;
        j += 1;
    }
    return x;
}
void solve() {
    int a, b;
    cin >> a >> b;
    cout << (a ^ findX(a, b)) + (b ^ (findX(a, b))) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}