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
    string m;
    cin >> t >> m;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '_')
                cout << " ";
            else if (s[i] == '?' || s[i] == '!' || s[i] == '.' || s[i]==',')
                cout << s[i];
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                n = s[i] - 97;
                cout << m[n];
            }
            else
            {
                n = s[i] - 65;
                cout << (char)(toupper(m[n]));
            }
        }
        cout << endl;
    }
    return 0;
}