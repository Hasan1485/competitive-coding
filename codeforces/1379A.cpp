/*
author-sesky_crocodileFFF
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

const string needed = "abacaba";

bool contains(string s) {
    int times = 0, n=s.size();
    for(int i=0; i<=n-7; ++i){
        if(s.substr(i,7) == needed) times++;
    }
    return (times==1);
}
void process(string s) {
    int n = s.size();
    for (int i=0; i<n; ++i){
        if(s[i]=='?') cout << "d";
        else cout << s[i];
    }
    cout << endl;
}
inline void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(contains(s)){
        cout << "Yes" << endl;
        process(s);
        return;
    }
    for (int i=0; i<=n-7; ++i) {
        string str = s;
        bool good=true;
        for (int j=0; j<7; ++j) {
            if(str[i+j] != '?' && str[i+j]!=needed[j]){
                good=false;
                break;
            }
            str[i+j]=needed[j];
        }
        if(good and contains(str)) {
            cout << "Yes" << endl;
            process(str);
            return;
        }
    }
    cout << "No" << endl;
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