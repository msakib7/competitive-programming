#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int t)
{
    ll n;
    cin>>n;
    ll c,r,l,x;
    x=ceil(sqrt(n*1.0));
    l=x*x-n;
    //cout<<x<<" "<<l<<endl;
    if(l<x)
    {
        r=x,c=l+1;
    }
    else
    {
        c=x,r=n-((x-1)*(x-1));
    }
    if(x%2==0)
    {
        swap(c,r);
    }
    cout<<"Case "<<t<<": "<<c<<" "<<r;
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
