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
        int pos[] = { 0, 0 };
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                pos[0]++;
            else
                pos[1]++;
        }
        if (n % 2 == 0) {
            if (pos[0] != pos[1]) {
                cout << -1 << endl;
                continue;
            }
            else {
                int ans = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] % 2 == 1 && i % 2 == 0)
                        ans++;
                }
                cout << ans << endl;
            }
        }
        else {
            if (pos[0] != pos[1] + 1) {
                cout << -1 << endl;
                continue;
            }
            else {
                int ans = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] % 2 == 1 && i % 2 == 0)
                        ans++;
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}