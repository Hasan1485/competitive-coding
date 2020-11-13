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
    long long int t,c=0;
    cin >> t;
    while (t--)
    {
        c=0;
        string ss, s;
        cin >> ss;
        cin >> s;
        map<char, long long int> m1;
        for (long long int i = 0; i < ss.size(); i++)
        {
            m1[ss[i]]++;
        }
        for (auto x : s)
        {
            if (m1[x])
                c++;
        }
        cout << c << endl;
    }
    return 0;
}