/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
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
        for (int i = 0; i < n;i++)
            cin >> a[i];
        sort(a, a + n);
        int x = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > 0)
                x++;
        }
        if (x == 0) {
            int ans = 1;
            for (int i = 0; i < 5; i++) {
                ans *= a[n - 1 - i];
            }
            cout << ans << endl;
            continue;
        }
        else if (x == 1 or x == 2) {
            int ans = 1;
            for (int i = 0; i < 4; i++)
                ans *= a[i];
            ans *= a[n - 1];
            cout << ans << endl;
            continue;
        }
        else if (x == 3 or x == 4) {
            int ans = 1, ans1 = 1;
            rep(i, 4) ans *= a[i];
            ans *= a[n - 1];
            ans1 *= a[0], ans1 *= a[1];
            rep(i, 3) ans1 *= a[n - 1 - i];
            cout << max(ans, ans1) << endl;
            continue;
        }
        else if (x == 5 or x > 5) {
            int ans = 1, ans1 = 1, p3 = 1;
            rep(i, 4) ans *= a[i];
            ans *= a[n - 1];
            ans1 *= a[0], ans1 *= a[1];
            rep(i, 3) ans1 *= a[n - 1 - i];
            rep(i, 5) p3 *= a[n - 1 - i];
            cout << max(ans, max(ans1, p3)) << endl;
            continue;
        }
    }
    return 0;
}
