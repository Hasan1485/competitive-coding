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
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(k==0)
            cout<<0<<" "<<n<<endl;
        else
            cout<<(n/k)<<" "<<(n%k)<<endl;
    }
    return 0;
}