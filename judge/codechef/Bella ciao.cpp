#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d,ans=0,x,y;
    cin>>a>>b>>c>>d;
    ans+=c;
    x=ceil(a/b);
    y=a%b;
    cout<<x<<" "<<y<<endl;
    ans+=(x)*c+x*d;
    cout<<ans<<endl;
    ans+=y*(c+(x-1)*d);
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
