#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int t)
{
    ll m,n,s=0,cnt=0;
    cin>>n>>m;
    s=0;
    while(1)
    {
       s=(s*10+m)%n;
       cnt++;
       if(s==0)
        break;
    }
   cout<<"Case "<<": "<<cnt;
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
