#include <bits/stdc++.h>

using namespace std;
const int Nmax=1e2+7;
int n,m;
int a[Nmax],b[Nmax],dp[Nmax][Nmax];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int j=1;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<b[j]-1) continue;
        while(a[i]-b[j]>1&&j<m)j++;
        if(abs(a[i]-b[j])<=1)
        {
            ans++;
            j++;
        }
    }
    cout<<ans;
    return 0;
}
