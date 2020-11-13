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
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        int total = 0, total1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i]; //3
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            total1 += b[i]; //7
        }
        sort(b, b + n, greater<int>()); //4 3
        sort(a, a + n);                 //1 2
        int ans = 0;
        for (int i = 0; i < k; i++) {
            if (b[i] > a[i])
                a[i] = b[i];
        }
        for (int i = 0; i < n; i++)
            ans += a[i];
        cout << ans << endl;
    }
    return 0;
}