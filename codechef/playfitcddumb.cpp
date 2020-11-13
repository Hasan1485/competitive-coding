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
bool arraySorted(int n, int s[])
{
    int a = 1, d = 1, i = 0;
    while ((a == 1 || d == 1) && i < n - 1)
    {
        if (s[i] < s[i + 1])
            d = 0;
        else if (s[i] > s[i + 1])
            a = 0;
        i++;
    }
    return d == 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mx = 0, pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mx < a[i])
            {
                mx = a[i];
                pos = i;
            }
        }
        // cout<<mx<<endl;
        // cout<<pos<<endl;
        if (arraySorted(n, a))
            cout << "UNFIT" << endl;
        else
        {
            if (pos != 0)
            {
                // cout<<"YAY"<<endl;
                // cout<<pos<<endl;
                int mn = a[0];
                for (int i = pos; i >= 0; i--)
                    mn = min(mn, a[i]);
                cout << mx - mn << endl;
            }
            else
            {
                int mxx = 0, ind = 0;
                for (int i = n - 1; i >= 0; i--)
                {
                    if (a[i] == mx)
                        continue;
                    else
                    {
                        if (a[i] == mxx)
                            continue;
                        if (a[i] > mxx)
                        {
                            mxx = a[i];
                            ind = i;
                        }
                    }
                }
                int mnn = mxx;
                for (int i = ind; i >= 0; i--)
                    mnn = min(mnn, a[i]);
                cout << mxx - mnn << endl;
            }
        }
    }
    return 0;
}