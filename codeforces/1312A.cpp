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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n % m == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}