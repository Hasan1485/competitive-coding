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
        sort(a, a + n);
        bool ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i] - a[i + 1]) == 1) {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}