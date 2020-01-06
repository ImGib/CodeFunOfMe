#include <bits/stdc++.h>
#define ii pair<int,int>
using namespace std;
const int N=5e5+7;
int n,k,h[N];
ii ans=ii(INT_MAX,0);
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
        h[i]+=h[i-1];
        if(i>=k)
        {
            if(ans.first > h[i]-h[i-k])ans=ii(h[i]-h[i-k],i-k+1);
        }
    }
    cout<<ans.second;
    return 0;
}
