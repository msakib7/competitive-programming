#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
void solve()
{
    int a,b;
    double ans,x,y,z;
    cin>>a>>b;
    x=a*b;
    y=x/(a+b);
    ans=x-(pi*pow(y,2));
    printf("%.6lf",ans);

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
