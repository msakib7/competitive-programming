#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans;
    if(a==b&&b==c)
        ans=0;
    else
    {
        int ttl;
        ttl=a+b*2+c*3;
        int avg=ttl/2;
        int rmn=ttl-avg;
        ans=abs(rmn-avg);
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
