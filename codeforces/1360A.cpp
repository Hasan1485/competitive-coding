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
        int a, b;
        cin >> a >> b;
        int mn = min(a, b);
        mn *= 2;
        int mx = max(a, b);
        if (mn < mx)
            cout << mx * mx << endl;
        else
            cout << mn * mn << endl;
    }
    return 0;
}