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
        int c[2] = { 0 };
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[a[i]]++;
        }
        if (c[0] >= n / 2) {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
                cout << "0 ";
            cout << endl;
        }
        else {
            if (c[1] % 2 == 1)
                c[1]--;
            cout << c[1] << endl;
            for (int i = 0; i < c[1]; i++)
                cout << "1 ";
            cout << endl;
        }
    }
    return 0;
}