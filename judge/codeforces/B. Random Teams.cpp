#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;
    if(m==1)
    {
        ll ans=n*(n-1)/2;
        cout<<ans<<" "<<ans<<endl;
        return 0;
    }
    ll mxi=(n-m+1)*(n-m)/2;
    ll ot=n/m;
    ll ot1=n%m;
    ll ans1=ot*(ot-1)/2;
    ll ans2=(ot+1)*ot/2;
    ll ans3=(ans1*(m-ot1)+ans2*ot1);
    cout<<ans3<<" "<<mxi<<endl;

  return 0;
}
