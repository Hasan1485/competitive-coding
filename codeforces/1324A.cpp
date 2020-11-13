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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = a[0] % 2;
        int c = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] % 2 == ans)
                c++;
        }
        if (c == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}