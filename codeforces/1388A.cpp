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
        if (n <= 30)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            if (n == 37 || n == 41 || n == 46 || n == 31)
                cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
            else
                cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << endl;
        }
    }
    return 0;
}