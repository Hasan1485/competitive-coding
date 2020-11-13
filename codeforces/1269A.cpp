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
int prime(int n) {
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            flag = true;
    }
    return flag;
}
int main() {
    int n;
    cin >> n;
    int temp = n + 4;
    while (true) {
        if (prime(temp) && prime(temp - n)) {
            cout << temp << " " << temp - n << endl;
            break;
        }
        temp += 1;
    }
    return 0;
}