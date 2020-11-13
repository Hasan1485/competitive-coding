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
        if (a - b == 0)
            cout << 0 << endl;
        else {
            int ans = ((abs(a - b)) / 10);
            int temp = (abs(a - b)) % 10;
            if (temp == 0)
                cout << ans << endl;
            else
                cout << ans + 1 << endl;
        }
    }
    return 0;
}