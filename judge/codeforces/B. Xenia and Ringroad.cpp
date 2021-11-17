#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,ans=0,x=0,ppx=1;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        if(x>=ppx)
            ans+=x-ppx;
        else
            ans+=n-ppx+x;
        ppx=x;
    }
    cout<<ans;

  return 0;
}
