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
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        set<int> av;
        for (int i = c - r; i <= c + r; i++)
            av.insert(i);
        int ans = 0;
        bool ok = 0;
        for (int i = min(a, b); i <= max(a, b); i++) {
            if (av.find(i) != av.end())
                ok = true;
            if (av.find(i) == av.end())
                ans++;
        }
        if (ok)
            cout << ans << endl;
        else
            cout << abs(a - b) << endl;
    }
    return 0;
}