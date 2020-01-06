#include <bits/stdc++.h>

using namespace std;
int n;
double l;
double a[1007];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>l;
    a[n+1]=l;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    double ans=0;
    for(int i=2;i<=n+1;i++)
        ans=max(ans,abs(a[i]-a[i-1]));
    if(a[1]!=0||a[n]!=l)
    {
        cout<<max(ans/2,max(l-a[n],a[1]));
        return 0;
    }
    else
    {
        cout<<ans/2;
    }
    return 0;
}
