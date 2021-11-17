#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
void solve()
{
    double a,b,c,d,k,ans,r,R,p;
    cin>>d>>k;
    p=2*pi;
    r=d/(p*(k-1));
    R=r*k;
    ans=(pi*pow(R,2))-(pi*pow(r,2));
    printf("%.6lf",ans);
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
