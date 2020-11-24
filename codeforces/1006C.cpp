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
inline void solve() {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int left = 0, right = n - 1;
        int left_sum = a[0], right_sum = a[n - 1], ans = 0;
        while (left < right) {
                if (left_sum > right_sum) {
                        right--;  
                        right_sum += a[right];
                }   
                else if (right_sum > left_sum) {
                        left++;
                        left_sum += a[left];
                }
                else {
                        ans = max(ans, right_sum);
                        left++;
                        right--;
                        right_sum += a[right];
                        left_sum += a[left];
                }
        }
        cout << ans << endl;
}
signed main(){
        solve();
        return 0;
}