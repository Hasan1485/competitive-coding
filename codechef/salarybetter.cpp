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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum{};
		int minn{INT_MAX};
		for (int i=0; i<n;i++)
        {
			int temp;
			cin>>temp;
			sum += temp;
			minn = min(temp,minn);
		}
		cout<<sum-(n*minn)<<endl;
    }
    return 0;
}