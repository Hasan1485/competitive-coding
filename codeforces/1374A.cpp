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
        int x, y, n;
        cin >> x >> y >> n;
        if (n - (n % x) + y <= n)
            cout << (n - (n % x)) + y << endl;
        else
            cout << ((n - (n % x)) + y) - x << endl;
    }
    return 0;
}