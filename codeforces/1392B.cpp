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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (k % 2 == 1) {
            int mx = *max_element(a, a + n);
            for (int i = 0; i < n; i++)
                a[i] = mx - a[i];
        }
        else {
            int temp = 2;
            while (temp--) {
                int mx = *max_element(a, a + n);
                for (int i = 0; i < n; i++)
                    a[i] = mx - a[i];
            }
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}