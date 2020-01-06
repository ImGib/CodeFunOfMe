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
char s[N];
int n;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    n=0;
    while(cin>>s[n++]);
    int flag1=0,flag2=0,x=1;
    foru(i,0,n-1,x)
    {
        x=1;
        if(s[i]=='A'&&s[i+1]=='B'&&!flag1)
        {
            flag1=1;
            i+=2;
            x=0;
        }
        if(flag1)
        {
            if(s[i]=='B'&&s[i+1]=='A')
            {
                flag2=1;
                break;
            }
        }
    }
    if(!flag1||!flag2)
    {
        flag1=0;
        flag2=0;
        foru(i,0,n-1,x)
        {
            x=1;
            if(s[i]=='B'&&s[i+1]=='A'&&!flag2)
            {
                flag2=1;
                i+=2;
                x=0;
            }
            if(flag2)
            {
                if(s[i]=='A'&&s[i+1]=='B')
                {
                    flag1=1;
                    break;
                }
            }
        }
    }
    cout<<(flag1&&flag1 ? "YES" : "NO");
    return 0;
}
