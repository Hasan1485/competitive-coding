/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int MinimumSwapOperations(string s) {
    bool zero_exist = false;
    bool multiple_of_2 = false;
    int sum = 0;
    int index_of_zero;
    bool more_zero = false;
    for (int i = 0; i < s.length(); i++) {
        int val = s[i] - '0';
        if (zero_exist == true)
            more_zero = true;
        if (val == 0) {
            zero_exist = true;
            index_of_zero = i;
        }
        sum += val;
    }
    if (zero_exist == false || sum % 3 != 0) {
       return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        int val = s[i] - '0';
        if (val % 2 == 0 && i != index_of_zero)
            multiple_of_2 = true;
    }
    if (multiple_of_2 == false) {
        return 0;
    }
    int last_val = s[s.length() - 1] - '0';
    int second_last_val = s[s.length() - 2]  - '0';
    if (last_val == 0 && second_last_val % 2 == 0)
        return 1;
    else if ((last_val == 0 && second_last_val % 2 != 0)|| (last_val % 2 == 0 && second_last_val == 0))
        return 1;

    else if (more_zero == true && (last_val == 0 && second_last_val % 2 != 0))
        return 1;
    else
        return 1;
}
void solve() {
    string s;
    cin >> s;
    if (MinimumSwapOperations(s))
        cout << "red" << endl;
    else 
        cout << "cyan" << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}