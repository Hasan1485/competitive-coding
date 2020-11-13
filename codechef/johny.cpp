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
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            a.push_back(p);
        }
        int k;
        cin >> k;
        int key = a[k - 1];
        sort(a.begin(), a.end());
        vector<int>::iterator it;
        it = find(a.begin(), a.end(), key);
        int index = it - a.begin();
        cout << index + 1 << endl;
    }
    return 0;
}