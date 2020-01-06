#include <bits/stdc++.h>

using namespace std;
int n,k;
long long ans=0;
int money[107];
vector<int>dollar;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    dollar.push_back(1);
    dollar.push_back(5);
    dollar.push_back(10);
    dollar.push_back(20);
    dollar.push_back(100);
    cin>>n;
    for(int i=dollar.size()-1;i>=0;i--)
    {
        if(n==0)break;
        money[dollar[i]]=n/dollar[i];
        n-=money[dollar[i]]*dollar[i];
        ans+=money[dollar[i]];
    }
    cout<<ans;
    return 0;
}
