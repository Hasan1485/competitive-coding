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
    int n, total = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
        total += a.at(i);
    }
    int sum = (n * (n + 1)) / 2;
    if(sum==total)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}