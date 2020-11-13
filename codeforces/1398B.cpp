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
        vector<int> a;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                int j = i;
                while (j < s.length() && s[j + 1] == '1')
                    j++;
                a.push_back((j - i) + 1);
                i=j;
            }
        }
        int ans = 0;
        sort(a.begin(), a.end(),greater<int>());
        for (int i = 0; i < a.size(); i += 2)
            ans+=a[i];
        cout << ans << endl;
    }
    return 0;
}