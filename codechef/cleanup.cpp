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
        int n, m;
        cin >> n >> m;
        vector<int> a;
        for (int i = 0; i < m; i++)
        {
            int p;
            cin >> p;
            a.push_back(p);
        }
        vector<int> b;
        for (int i = 1; i <= n; i++)
        {
            b.push_back(i);
        }
        for (int i = 0; i < m; i++)
        {
            int k = lower_bound(b.begin(), b.end(), a.at(i)) - b.begin();
            b.erase(b.begin() + k);
        }
        for (int i = 0; i < n - m; i++)
        {
            if (i % 2 == 0)
                cout << b.at(i) << " ";
        }
        cout << endl;
        for (int i = 0; i < n - m; i++)
        {
            if (i % 2 == 1)
                cout << b.at(i) << " ";
        }
        cout << endl;
    }
    return 0;
}