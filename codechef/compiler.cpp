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
int res(string s)
{
    int i = 0, ans = 0;
    stack<char> ss;
    while (i < s.length())
    {
        if (s[i] == '<')
            ss.push(s[i]);
        else
        {
            if (ss.empty())
                return ans;
            else if (ss.top() == '<')
                ss.pop();
            else
                return ans;
            if (ss.empty())
                ans = i + 1;
        }
        i++;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << res(s) << endl;
    }
    return 0;
}