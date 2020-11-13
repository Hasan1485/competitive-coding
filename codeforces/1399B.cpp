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
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for (auto& it : a) cin >> it;
		for (auto& it : b) cin >> it;
		int mna = *min_element(a.begin(), a.end());
		int mnb = *min_element(b.begin(), b.end());
		long long ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += max(a[i] - mna, b[i] - mnb);
		}
		cout << ans << endl;
	}
	return 0;
}