#include <bits/stdc++.h>

using namespace std;
int n;
long long k;
int f[1000007];
void service()
{
    f[1]=1;
    for(int i=2;i*i<1e6+7;i++)
        if(!f[i])
    {
        for(int j=i*i;j<1e6+7;j+=i)f[j]=1;
    }
}
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    service();
    cin>>n;
    while(n--)
    {
        cin>>k;
        long long l=sqrt(k);
        if(!f[l]&&l*l==k)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
