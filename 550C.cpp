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
char a[N];
int n;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    n=0;
    while(cin>>a[n])n++;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]%8==0)
        {
            cout<<"YES\n"<<a[i];
            return 0;
        }
        for(int j=i-1; j>=0; j--)
        {
            if((a[j]*10+a[i])%8==0)
            {
                cout<<"YES\n"<<a[j]<<a[i];
                return 0;
            }
            for(int k=j-1; k>=0; k--)
                if((a[k]*100+a[j]*10+a[i]) % 8 ==0)
                {
                    cout<<"YES\n"<<a[k]<<a[j]<<a[i];
                    return 0;
                }
        }
    }
    cout<<"NO";
    return 0;
}
