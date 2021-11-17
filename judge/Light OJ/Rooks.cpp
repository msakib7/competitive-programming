#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        ll n,k;
        cin>>n>>k;
        printf("Case %d: ",t);
        if(k>n)
        {
            cout<<"0"<<endl;
            continue;
        }
        ll m,ans=1,fac=1;
        m=k;
        while(k)
        {
            fac*=k--;
        }
        while(m)
        {
            ll gcd=__gcd(n*n,fac);
            ll itm=n*n/gcd;
            fac/=gcd;
            ans*=itm;
            m--;
            n--;
        }
        cout<<ans<<endl;
    }
  return 0;
}
