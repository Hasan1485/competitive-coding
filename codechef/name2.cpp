#include <bits/stdc++.h>
#include <string.h>
#define ll long long int
using namespace std;
const int MAX=25000;
int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
bool pos(string s, string str) 
{  
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(str[j]==s[i])
            j++;
    }
    return j==str.length();
} 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string m, w;
        cin >> m >> w;
        if(pos(m,w) || pos(w,m))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}