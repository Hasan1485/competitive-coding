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
        if (n == 1)
            cout << "YES" << endl;
        else {
            bool ans = false;
            for (int i = 0; i < n - 1; i++) {
                if (a[i + 1] - a[i] > 1) {
                    ans = true;
                    break;
                }
            }
            if (ans)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}