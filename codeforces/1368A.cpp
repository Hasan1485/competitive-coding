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
        int a, b, n;
        cin >> a >> b >> n;
        int ans = 0;
        int sum = 0;
        int temp = 0;
        while (sum <= n) {
            ++ans;
            sum = a + b;
            if (b < a)
                b = sum;
            else
                a = sum;
        }
        cout << ans << endl;
    }
    return 0;
}