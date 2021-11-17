#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll>arr(n);
        for(auto &x:arr)
        {
            cin>>x;
            sum+=x;
        }
        if(n==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        vector<ll>suf(n),pref(n);
        pref[0]=arr[0];
        for(ll i=1;i<n;i++)
        {
            pref[i]=__gcd(pref[i-1],arr[i]);
        }
        suf[n-1]=arr[n-1];
        for(ll i=n-2;i>=0;i--)
        {
            suf[i]=__gcd(suf[i+1],arr[i]);
        }
        ll ans=sum/suf[0];
        for(ll i=0;i<n;i++)
        {
            ll k=__gcd((i-1<0?0 : pref[i-1]),(i+1>=n?0:suf[i+1]));
            ans=min(ans,1ll+(sum-arr[i])/k);
        }
        cout<<ans<<endl;
    }
   return 0;
}
