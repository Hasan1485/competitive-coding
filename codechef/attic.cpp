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
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll len = s.length();
        int ans = 0, temp = 1; 
        for (int i = 0, j = 0; i < len; i = j)
        {
            for (j = i + 1; j < len; j++)
                if (s[j] == '#')
                    break;
            if (j - i > temp)
            {
                ans++;
                temp = j - i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}