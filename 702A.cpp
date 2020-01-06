#include <bits/stdc++.h>

using namespace std;
const int N=1e5+7;
int n,a[N],ans=1;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int cur=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>a[i-1])cur++;
        else{
            ans=max(ans,cur);
            cur=1;
        }
    }
    cout<<max(ans,cur);
    return 0;
}
