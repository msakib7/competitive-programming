#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    ll cnt1=0,cnt0=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            cnt1++;
        if(arr[i]==0)
            cnt0++;
    }
    ll ans=0;
    ans=pow(2,cnt0)*cnt1;
    cout<<ans<<endl;

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
