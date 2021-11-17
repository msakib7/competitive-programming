#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx=100000;
const ll mod=1000000007;
ll mul(ll x, ll y)
{
    ll res= x*y;
    return (res>=mod?res%mod:res);
}
ll power(ll x, ll y)
{
    if (y<0)
        return 1;
    ll res=1;
    x%=mod;
    while(y)
        {
            if(y&1)
                res=mul(res,x);
            y>>=1;
            x=mul(x, x);
            //cout<<y<<endl;
        }
    return res;
}
int main()
{
    vector<ll>cefra;
    cefra.push_back(0);
    for(ll i=1;i<mx;i++)
    {
        ll res,num;
        res=num=i;
        num/=10;
        while(num!=0)
        {
            ll x;
            x=num%10;
            res=res*10+x;
            num/=10;
        }
        cefra.push_back(res);
    }
    vector<ll>cusum;
    cusum.push_back(0);
    ll s=cefra.size();
    ll sum=0;
    for(int i=1;i<s;i++)
    {
        sum+=cefra[i];
        cusum.push_back(sum);
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll l,r;
        cin>>l>>r;
        ll ans=power(cefra[l],cusum[r]-cusum[l]);
        cout<<ans<<endl;
    }
   return 0;
}
