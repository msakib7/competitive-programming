#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll mn=50000000000;
    ll mx=50000000000;
    ll n;
    cin>>n;
    ll arr[n+5],brr[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<mn)
            mn=arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>brr[i];
        if(brr[i]<mx)
            mx=brr[i];
    }
    //cout<<mn<<" "<<mx<<endl;;
    ll x,y,ans=0;
    for(ll i=0;i<n;i++)
    {
        x=0,y=0;
        x=arr[i]-mn;
        y=brr[i]-mx;
        if(x>y)
            ans+=x;
        else
            ans+=y;
    }
    cout<<ans;
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
