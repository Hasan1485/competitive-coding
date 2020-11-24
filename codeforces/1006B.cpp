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

bool visited[2000] = {0};
int find_index(int targ, int a[], int n){
        for(int i = 0; i < n; ++i){
                if(a[i] == targ && !visited[i]) {
                        visited[i] = true;
                        return i;
                }
        }
        return -1;
}
inline void solve(){
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; ++i){
                cin >> a[i];
                b[i] = a[i];
        }
        sort(a, a + n, greater<int>());
        int ans = 0;
        vector<int> maximums;
        for(int i = 0; i < k; ++i){
                maximums.push_back(a[i]);
                ans += a[i];
        }
        cout << ans << endl;
        vector<int> positions;
        for(int i : maximums){
                int my_position = find_index(i, b, n);
                positions.push_back(my_position + 1);
        }
        sort(positions.begin(), positions.end());
        int prev = 0;
        int counter = 0;
        int sum = 0;
        for (int i : positions) {
                counter++;
                if (counter == k) {
                        cout << n - sum << endl;
                        break;
                }
                cout << i - prev << " ";
                sum += i - prev;
                prev = i;
        }
}
signed main(){
        solve();
        return 0;
}