#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define deb(x) cout << #x << " = " << x << endl

//=======================
const int MOD = 1'000'000'007;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, d;
    cin>>n>>d;
    int a[n+1];
    for(int i=0; i<n; i++)
    	cin>>a[i];

    sort(a, a+n, greater<>());

    int count = 0;
    for(int i=0; i<n-1; i++)
    {
    	if(a[i]- a[i+1] <=d)
    	{
    		count++;
    		i++;
    	}
    }
    cout<<count<<endl;
    return 0;
} 