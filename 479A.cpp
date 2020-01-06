#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a+b*c,max(a*(b+c),max(a*b*c,max(a*b+c,max(a+b+c,(a+b)*c)))));
    return 0;
}
