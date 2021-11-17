#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int t)
{
    ll n,m;
    cin>>n>>m;
    printf("Case %d: %lld",t,(n*m)/2);
}
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        solve(t);
        printf("\n");
    }
   return 0;
}
