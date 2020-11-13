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
        vector<vector<ll>> v(n, vector<ll>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[0][i] != i + 1)
            {
                for (int j = 0; j <= i; j++)
                {
                    for (int s = j; s <= i; s++)
                    {
                        swap(v[s][j], v[j][s]);
                    }
                }
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}