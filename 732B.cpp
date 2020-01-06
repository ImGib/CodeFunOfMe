#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define mt make_tuple
#define foru(i,l,r) for(int i=l;i<=r;i++)
#define ford(i,r,l) for(int i=r;i>=l;i--)
#define reset(a,b) memset(a,b,sizeof(a))
#define oo 999999999
using namespace std;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef map<int,int> mii;
typedef map<ii,bool> miib;
typedef vector<int> vi;
const int N=5e2+7;
int n,k;
int a[N],dp[N],b[N];
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    b[1]=a[1];
    for(int i=2;i<=n;i++){
        if(a[i]+b[i-1]>=k)
        {
            b[i]=a[i];
            dp[i]=dp[i-1];
        }
        else
        {
            b[i]=k-b[i-1];
            dp[i]=dp[i-1]+k-b[i-1]-a[i];
        }
    }
    cout<<dp[n]<<"\n";
    for(int i=1;i<=n;i++)cout<<b[i]<<" ";
    return 0;
}
