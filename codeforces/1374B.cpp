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
        int ans = 0, ans1 = 0;
        while (n % 2 == 0) {
            n /= 2;
            ++ans;
        }
        while (n % 3 == 0) {
            n /= 3;
            ++ans1;
        }
        if (n == 1 && ans <= ans1)
            cout << 2 * ans1 - ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}