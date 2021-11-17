#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,x,mx=0,mx1=0;
    cin>>n;
    int sum=0,sum2=0;
    while(n--)
    {
        cin>>x;
        sum+=x;
        mx=max(sum,mx);
    }
    cin>>m;
    while(m--)
    {
        cin>>x;
        sum2+=x;
        mx1=max(sum2,mx1);
    }
    cout<<mx+mx1;


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
