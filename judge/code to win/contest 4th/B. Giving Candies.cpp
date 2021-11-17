#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll mod=1e9+7;
void solve()
{
    ll n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x+1);
    }
    ll ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*v[i];
        ans%=mod;
    }
    cout<<ans-1;
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
