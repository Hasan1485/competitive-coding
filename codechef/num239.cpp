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
bool pretty(int n)
{
    return (n % 10 == 2 || n % 10 == 3 || n % 10 == 9);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        int ans = 0;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            if (pretty(i))
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}