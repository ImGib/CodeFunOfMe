#include <bits/stdc++.h>

using namespace std;
vector<int>val(4);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<4;i++)cin>>val[i];
    sort(val.begin(),val.end());
    int val_hieu=val[1]-val[2];
    int a=(val_hieu+val[0])/2;
    int b=val[1]-a;
    cout<<a<<" "<<b<<" "<<val[3]-a-b;
    return 0;
}
