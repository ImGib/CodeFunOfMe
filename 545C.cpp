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
const int N=1e5+7;
int n;
ii a[N];
int posmax;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n==1)
    {
        cout<<1;return 0;
    }
    for(int i=1;i<=n;i++)cin>>a[i].first>>a[i].second;
    sort(a+1,a+n+1);
    int ans=2;
    posmax=a[1].first;
    for(int i=2;i<n;i++)
    {
        if(a[i].first - a[i].second > posmax)
        {
            ans++;
            posmax=a[i].first;
            continue;
        }
        if(a[i].first + a[i].second < a[i+1].first)
        {
            ans++;
            posmax=a[i].first + a[i].second;
            continue;
        }
        posmax=a[i].first;
    }
    cout<<ans;
    return 0;
}
