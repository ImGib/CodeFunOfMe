#include <bits/stdc++.h>

using namespace std;
string mem[7]={"", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int n;
int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    if(n<=5)
    {
        cout<<mem[n];return 0;
    }
    int cs=1;
    int que=0;
    int luot=1;
    while(que+cs<n)
    {
        que+=cs;
        luot++;
        if(luot>5)
        {
            luot=1;
            cs*=2;
        }
    }
    //if(luot)
    cout<<mem[luot];
    return 0;
}
