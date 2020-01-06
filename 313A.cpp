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
int n;
int main()
{
//    freopen("a.inp","r",stdin);
//    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n>0){
        cout<<n;
        return 0;
    }
    int m=n/100 * 10 + n%10;
    cout<<(n/10 > m ? n/10 : m);
    return 0;
}
