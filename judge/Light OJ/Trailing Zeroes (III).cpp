#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mxn=1e18+7;
ll zrocount(ll num)
{
    ll zro=0;
    for(ll i=5;i<=num;i*=5)
    {
        zro+=(num/i);
    }
    return zro;
}
void solve(int tc)
{
    ll rzro;
    cin>>rzro;
    ll lo=1,hi=mxn,ans=-1;
    while(lo<=hi)
    {
        ll md=(lo+hi)/2;
        ll zro=zrocount(md);
        if(zro>rzro)
        {
            hi=md-1;
        }
        else if(zro<rzro)
        {
            lo=md+1;
        }
        else
        {
            ans=md;
            hi=md-1;
        }
    }
    cout<<"Case "<<tc<<": ";
    if(ans!=-1)
        cout<<ans;
    else
        cout<<"impossible";
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
