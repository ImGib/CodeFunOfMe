#include <bits/stdc++.h>

using namespace std;
const int nmax=5e5+7;
int n;
long long a[nmax],dp[nmax];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],a[i]+=a[i-1];
    if(a[n]%3)
    {
        cout<<0;return 0;
    }
    long long ans=0;
    for(int i=n;i>=1;i--)
    {
        if(i<n)dp[i]=dp[i+1];
        else dp[i]=0;
        if(a[n]-a[i-1] == a[n]/3) dp[i]++;
    }
    for(int i=1;i<n;i++)
        if(a[i] == a[n]/3)ans+=dp[i+2];
    cout<<ans;
    return 0;
}
