#include <bits/stdc++.h>
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
        int n, m;
        cin >> n >> m;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            a.push_back(p);
        }
        int flag=0;
        long long total = 1 << n;
        for (long long i = 0; i < total; i++)
        {
            long long sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                    sum += a[j];
            }
            if(sum==m)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
    return 0;
}