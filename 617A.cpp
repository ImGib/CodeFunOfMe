#include <bits/stdc++.h>

using namespace std;
int n,ans=0;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=5;i>=1;i--)
        if(n>=i)
    {
        ans+=n/i;
        n%=i;
    }
    cout<<ans;
    return 0;
}
