#include <bits/stdc++.h>

using namespace std;
int a,b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b;
    cout<<min(a,b)<<" "<<abs(a-b)/2;
    return 0;
}
