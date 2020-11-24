/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
bool sorted (vector<int> a, int n) {
    for (int i= 0; i < n - 1; ++i) {
        if (a[i] < a[i + 1]) return false;
    }
    return true;
}
inline void solve() {
        int n;
        cin >> n;
        vector<int> best;
        for (int i = 0; i < n; ++i) {
                int width, height;
                cin >> width >> height;
                if (best.empty()) {
                        best.push_back(width > height ? width : height);
                }
                else {
                    if (width > best[i - 1] && height > best[i - 1]) {
                            cout << "NO" << endl;
                            return;
                    }
                    else if (width <= best[i - 1] && height <= best[i - 1]) {
                            best.push_back(width > height ? width : height);
                    }
                    else if (width <= best[i - 1]) {
                            best.push_back(width);
                    }
                    else {
                            best.push_back(height);
                    }
                }
        }
        cout << (sorted(best, n) ? "YES" : "NO") << endl;
}
signed main(){
        solve();
        return 0;
}