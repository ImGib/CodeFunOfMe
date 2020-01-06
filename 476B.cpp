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
const int N=1e6+7;
char a[17],b[17];
int n=0,m=0;
int suma=0,sumb=0;
ii ans;
void FINDANS(int i, int sumb)
{
    if(i>n)
    {
        if(sumb==suma) ans.first++;
        ans.second++;
        return;
    }
    foru(j,0,1,1) FINDANS(i+1,sumb + (j==0 ? 1 : -1));
}
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    gets(a);
    while(a[n]=='+'||a[n]=='-')
    {
        suma += (a[n]=='+' ? 1 : -1);
        n++;
    }
    gets(b);
    n=0;
    while(b[m]=='+'||b[m]=='-'||b[m]=='?')
    {
        sumb += (b[m]=='+' ? 1 : (b[m]=='-' ? -1 : 0));
        if(b[m]=='?') n++;
        m++;
    }
    if(n==0)
    {
        cout<<setprecision(12)<<fixed<<(suma==sumb ? (double)1 : (double)0);
        return 0;
    }
    FINDANS(1,sumb);
    cout<<setprecision(12)<<fixed<<(double)ans.first/(double)ans.second;
    return 0;
}
