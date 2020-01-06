#include <bits/stdc++.h>

using namespace std;
int n,a,b,c;
int dp[4007];
int f[4007];
int slv(int i)
{
    if(i>=n)
    {
        if(i==n) return 0;
        return -1e9;
    }
    if(f[i]!=-1)return f[i];
    int cur=0;
    cur=max(slv(i+a), max(slv(i+b), slv(i+c)))+ 1;
    return f[i]=cur;
}
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>a>>b>>c;
    memset(f,-1,sizeof f);
    dp[a]=1;
    dp[b]=1;
    dp[c]=1;
    //cout<<slv(0);
    for(int i=min(a,min(b,c));i<=n;i++)
    {
        if(i>=a&&dp[i-a]!=0)dp[i]=max(dp[i],dp[i-a]+1);
        if(i>=b&&dp[i-b]!=0)dp[i]=max(dp[i],dp[i-b]+1);
        if(i>=c&&dp[i-c]!=0)dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout<<dp[n];
    return 0;
}
