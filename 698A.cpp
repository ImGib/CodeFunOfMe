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
const int N=107;
int a[N], n;
iii dp[N];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    int cnt=0,job=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i] == 0)
        {
            dp[i]=iii(ii(0,0),dp[i-1].second+1);
            job=0;
            continue;
        }
        else if(a[i]==1)
        {
            // did not work or count of 3 odd
            if(dp[i-1].first.second==0||job==0) dp[i]=iii(ii(0,1), dp[i-1].second);
            else dp[i]=iii(ii(0,0),dp[i-1].second+1);
            job++;
            continue;
        }
        else if(a[i]==2)
        {
            // did not work or count of 3 odd
            if(dp[i-1].first.first==0||job==0) dp[i]=iii(ii(1,0),dp[i-1].second);
            else dp[i]=iii(ii(0,0),dp[i-1].second+1);
            job++;
            continue;
        }
        else
        {
            if(i>1)
            {
                if((dp[i-1].first.first!=1||dp[i-1].first.second!=1)&&dp[i-1].first.first+dp[i-1].first.second==1)
                {
                    dp[i]=iii((dp[i-1].first.first==1 ? ii(0,1) : ii(1,0)), dp[i-1].second);
                }
                else if(a[i-1]==3||a[i-1]==0||(max(dp[i-1].first.first,dp[i-1].first.second)==0))
                {
                    dp[i]=iii(ii(1,1),dp[i-1].second);
                    job=0;
                }
            }
            continue;
        }
    }
    cout<<dp[n].second;
    return 0;
}
