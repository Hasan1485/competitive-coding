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
        int n, k;
        cin >> n >> k;
        vector<int> a;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            a.push_back(p);
            total = total + a.at(i);
        }
        sort(a.begin(), a.end());
        int sum1 = 0;
        for (int i = 0; i < k; i++)
        {
            sum1 = sum1 + a.at(i);
        }
        int sum2 = 0, sum = 0;
        for (int i = 0; i < n - k; i++)
        {
            sum2 = sum2 + a.at(i);
        }
        sum = min(sum1, sum2);
        cout << (total - sum) - sum << endl;
    }
    return 0;
}