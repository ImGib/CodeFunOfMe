#include <bits/stdc++.h>

using namespace std;
long long n,k,m;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    m=n;
    if(m%2==0)m--;
    if((m-1)/2+1 >= k)
    {
        cout<<k*2-1;
        return 0;
    }
    k-=(m-1)/2+1;
    if(n%2!=0)n--;
    if((n-2)/2+1>=k)
    {
        cout<<k*2;
        return 0;
    }
    k-=(n-1)/2+1;
    cout<<k*2;
    return 0;
}
