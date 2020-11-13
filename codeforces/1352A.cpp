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
        int value;
        cin >> value;
        int length = floor(log10(value) + 1);
        int arrayExpandedForm[length] = { 0 };
        for (int i = 0; i < length; i++) {
            unsigned int rem = value % 10;
            for (int j = 1; j <= i; j++)
                rem *= 10;
            arrayExpandedForm[i] = rem;
            value = value / 10;
        }
        int ans = 0;
        for (int i = length - 1; i >= 0; i--) {
            if (arrayExpandedForm[i] != 0)
                ans++;
        }
        cout << ans << endl;
        for (int i = length - 1; i >= 0; i--) {
            if (arrayExpandedForm[i] != 0)
                cout << arrayExpandedForm[i] << " ";
        }
        cout << endl;
    }
}