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
        string s;
        cin >> s;
        int cnt0 = 0;
        int cnt1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                cnt0++;
            else
                cnt1++;
        }
        int ans = 0;
        ans = min(cnt0, cnt1);
        if (ans % 2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    return 0;
}