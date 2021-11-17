#include<bits/stdc++.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
void solve()
{
   long long n,m,k;
    long long r,c,ans=0,x;
    cin>>n>>m>>k;
    c=(k+n-1)/n;
    long long b=k/n;
    r=k%n;
    ans+=(r-1)*m;
    if(ans<0)
        ans=0;
    ans+=c;
    cout<<r<<" "<<c<<endl;
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
