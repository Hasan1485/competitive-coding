/*
author-sesky_crocodile
once a crocodile always a CROCODILE
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define OJ freopen("input.txt", "r", stdin);

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
inline void solve() {
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    int cnt1[26]={0},cnt2[26]={0};
    for (char c:a) cnt1[c-'a']++;
    for (char c:b) cnt2[c-'a']++;
    for (int i = 0; i < 25; ++i) {
        if (cnt1[i] < cnt2[i]) {
            printf("No\n");
            return;
        }
        cnt1[i]-=cnt2[i];
        if (cnt1[i]%k!=0) {
            printf("No\n");
            return;
        }
        cnt1[i+1]+=cnt1[i];
    }
    if (cnt1[25]!=cnt2[25]) {
        printf("No\n");
        return;
    }
    printf("Yes\n");
}
signed main() {
    // OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}