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
const int N=1e6+7;
int a,b,ans=0;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    if(a<b)swap(a,b);
    int step;
    while(a&&b)
    {
        if(a==1) break;
        if(a%2==0)
        {
            if(a/2 > 1)
            {
                step=a/2-1;
                a=2;
            }
            else
            {
                step=a/2;
                a=0;
            }
        }
        else
        {
            step=a/2;
            a%=2;
        }
        b+=step;
        ans+=step;
        swap(a,b);
    }
    cout<<ans;
    return 0;
}
