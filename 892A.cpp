#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define mt make_tuple
#define foru(i,l,r,step) for(int i=l;i<=r;i+=step)
#define ford(i,r,l,step) for(int i=r;i>=l;i-=step)
#define reset(a,b) memset(a,b,sizeof(a))
#define oo 999999999
using namespace std;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef map<int,int> mii;
typedef map<ii,bool> miib;
typedef vector<int> vi;
const int N=1e2+7;
char a[N],x;
int n;
int dp[N];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    n=0;
    while(cin>>x)
    {
        if(x=='Q'||x=='A')
        {
            //dp[n]= dp[n-1] + (x=='Q' ? 1 : -1);
            a[n]=x;
            n++;
        }
    }
    int ans=0;
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
        for(int k=j+1;k<n;k++)
        if(a[i]=='Q'&&a[j]=='A'&&a[k]=='Q')ans++;
    cout<<ans;
    return 0;
}
