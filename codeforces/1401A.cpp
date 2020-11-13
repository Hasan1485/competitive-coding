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
        if (n < k)
            cout << k - n << endl;
        else {
            if (n % 2 == k % 2)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}