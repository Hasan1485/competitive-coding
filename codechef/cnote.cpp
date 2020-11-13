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
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        vector<int> p;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            int page, price;
            cin >> page >> price;
            p.push_back(page);
            c.push_back(price);
        }
        int res = x - y;
        int m = 10000000;
        for (int i = 0; i < n; i++)
        {
            if (p.at(i) >= res)
                m = min(c.at(i), m);
        }
        if (m <= k)
            cout << "LuckyChef" << endl;
        else
            cout << "UnluckyChef" << endl;
    }
    return 0;
}