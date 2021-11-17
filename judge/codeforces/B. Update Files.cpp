#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0,ttl=1;
    while(ttl<n)
    {
        if(ttl<k)
        {
            ttl+=ttl;
            ans++;
        }
        else
        {
            ll req=n-ttl;
            if(req%k==0)
                ans+=(req/k);
            else
            {
                ans+=req/k;
                ans++;
            }
           break;
        }
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
