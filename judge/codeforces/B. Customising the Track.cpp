#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,sum=0;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ll x;
    x=sum%n;
    cout<<(n-x)*x;
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
