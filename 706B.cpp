#include <bits/stdc++.h>
#define ii pair<int,int>
using namespace std;
const int nmax=1e5+7;
int n,q,u,v;
priority_queue<int>m;
priority_queue<ii>x;
int ans[nmax];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>u;m.push(u);
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>v; x.push(ii(v,i));
    }
    while(x.size())
    {
        while(m.top() > x.top().first&&m.size())
        {
            u=m.top();
            v=x.top().first;
            m.pop();
        }
        int si=m.size();
        u=m.top();
        v=x.top().first;
        int point=x.top().second;
        if(m.top() > x.top().first) ans[x.top().second]=0;
        else ans[x.top().second]=m.size();
        x.pop();
    }
    for(int i=1;i<=q;i++)cout<<ans[i]<<"\n";
    return 0;
}
