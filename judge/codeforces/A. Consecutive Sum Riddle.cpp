#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll l,r;
    l=n-1;
    r=n;
    if(l==0)
        cout<<l<<" "<<r;
    else
        cout<<"-"<<l<<" "<<r;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
