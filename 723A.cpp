#include <bits/stdc++.h>

using namespace std;
int a,b,c;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b>>c;
    cout<<max(a,max(b,c))-min(a,min(b,c));
    return 0;
}
