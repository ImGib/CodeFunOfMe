#include <bits/stdc++.h>

using namespace std;
int n,k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    int nas=0;
    while(k+(nas+1)*5<=240)
    {
        k+=(nas+1)*5;
        nas++;
        n--;
        if(n==0)break;
    }
    cout<<nas;
    return 0;
}
