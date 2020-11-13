/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int i = 1, j = n - 1;
    vector<int> AliceEats, BobEats;
    int aliceEats = a[0], bobEats = 0;
    bool aliceMove = 0;
    while (i <= j) {
        if (!aliceMove) {
            bobEats = 0;
            while (bobEats <= aliceEats && j >= i) {
                bobEats += a[j];
                --j;
            }
            BobEats.push_back(bobEats);
            aliceMove = true;
        }
        else {  
            aliceEats = 0;
            while (aliceEats <= bobEats && i <= j) {
                aliceEats += a[i];
                ++i;
            }
            AliceEats.push_back(aliceEats);
            aliceMove = false;
        }
    }
    cout << AliceEats.size() + 1 + BobEats.size() << " ";
    int ans1 = a[0], ans2 = 0;
    for (int i : AliceEats) ans1 += i;
    for (int i : BobEats) ans2 += i;
    cout << ans1 << " " << ans2 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}