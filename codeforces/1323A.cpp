/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
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
        vector<int> ans;
        bool ok = 0;
        for (int i = 0; i <= n - 1; i++) {
            int sum = 0;
            if (ok == false) {
                for (int j = i; j <= n - 1; j++) {
                    ans.push_back(j);
                    sum = sum + a[j];
                    if (sum % 2 == 0) {
                        ok = true;
                        break;
                    }
                    else if (sum % 2 == 1 && j == n - 1)
                        ans.clear();
                }
            }
        }
        if (ok) {
            cout << ans.size() << endl;
            for (auto i : ans)
                cout << i + 1 << " ";
        }
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}
