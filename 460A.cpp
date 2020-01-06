#include <bits/stdc++.h>

using namespace std;
int n,m,ans=0,k;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    ans=n;
    while(n>=m)
    {
        ans+=n/m;
        k=n%m;
        n=k+n/m;
    }
    cout<<ans;
    return 0;
}
