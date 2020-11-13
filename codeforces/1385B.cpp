#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void printDistinct(int arr[], int n) {
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            cout << arr[i] << " ";
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n *= 2;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        printDistinct(arr, n);
        cout << endl;
    }
    return 0;
}