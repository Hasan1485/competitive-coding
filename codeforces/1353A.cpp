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
        int n, m;
        cin >> n >> m;
        if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
            cout << m << endl;
        else
            cout << 2 * m << endl;
    }
    return 0;
}