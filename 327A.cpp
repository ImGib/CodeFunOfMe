#include <bits/stdc++.h>

using namespace std;
const int Nmax=1e2+7;
int n;
int a[Nmax],dp[Nmax][Nmax],sum[Nmax];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],sum[i]=a[i]+sum[i-1];
    for(int i=1;i<=n;i++)
    {
        int ans=0;
        for(int j=i;j<=n;j++)
        {
            ans+=1-a[j];
            dp[i][j]=max(dp[i][j-1],max(dp[i-1][j], ans+sum[n]-sum[j]+sum[i-1]));
        }
    }
    cout<<dp[n][n];
    return 0;
}
