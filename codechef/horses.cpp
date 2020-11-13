#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            a.push_back(p);
        }
        sort(a.begin(), a.end(), greater<int>());
        int m = a.at(0);
        for (int i = 0; i < n-1; i++)
        {
            m = min(m, (a[i] - a[i + 1]));
        }
        cout << m << endl;
    }
    return 0;
}