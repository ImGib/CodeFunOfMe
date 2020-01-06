#include <bits/stdc++.h>

using namespace std;
long long n,sl,sc,m;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    if(!n%2)m=n-1;else m=n;
    sl=(m-1)/2+1;
    if(n%2)n--;
    sc=(n-2)/2+1;
    cout<<-(sl*(1+(sl-1)))+(sc*(2+(sc-1)));
    return 0;
}
