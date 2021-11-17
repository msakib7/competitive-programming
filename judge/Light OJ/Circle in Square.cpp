#include<bits/stdc++.h>
using namespace std;
double pi=2*acos(0.0);
void solve(int t)
{
    double n,ans,p,q;
    cin>>n;
    p=n*2;
    ans=p*p;
    q=pi*n*n;
    ans-=q;
    printf("Case %d: %.2lf",t,ans);
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
