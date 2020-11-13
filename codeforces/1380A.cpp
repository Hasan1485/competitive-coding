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
        int pos = -1, pos1 = -1, flag = 0;
        for (int i = 0; i < n; i++) {
            pos = pos1 = -1;
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) {
                    pos = j;
                    break;
                }
            }
            for (int k = pos + 1; k < n; k++) {
                if (a[pos] > a[k]) {
                    pos1 = k;
                    break;
                }
            }
            if (pos1 != -1 && pos != -1) {
                cout << "YES" << endl << i + 1 << " " << pos + 1 << " " << pos1 + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "NO" << endl;
    }
    return 0;
}