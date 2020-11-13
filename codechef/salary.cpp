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
bool equall(vector<int> a, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            c++;
        else
            break;
    }
    return c == n - 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
        }
        int max = 0;
        int c = 0, flag = 0;
        bool flag1 = false;
        for (int i = 0;; i++)
        {
            sort(a.begin(), a.end());
            max = a.at(n - 1);
            for (int j = 0; j < n; j++)
            {
                if (a[j] != max && flag1 == false)
                {
                    flag1 = true;
                    a[j]++;
                    c++;
                }
            }
            flag1 = false;
            if (equall(a, n))
            {
                cout << c << endl;
                break;
            }
        }
    }
    return 0;
}