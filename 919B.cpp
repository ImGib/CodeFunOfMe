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
const int N=1e4+7;
int n;
int a[N];
int Sum_Of_Num(int p)
{
    int res=0;
    while(p!=0)
    {
        res+=p%10;
        p/=10;
    }
    return res;
}
int main()
{
//    freopen("a.inp","r",stdin);
//    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int i=19;
    while(n--)
    {
        while(Sum_Of_Num(i)!=10) i+=9;
        i+=9;
    }
    cout<<i-9;
    return 0;
}
