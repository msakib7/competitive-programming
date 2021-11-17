#include<bits/stdc++.h>
using namespace std;
void solve(int i)
{
    double u1,u2,u3,a1,a2,t1,t2,t,td;
    cin>>u1>>u2>>u3>>a1>>a2;
    t1=u1/a1;
    t2=u2/a2;
    t=t1;
    if(t2>t1)
        t=t2;
    double bd;
    bd=u3*t;
    td=((u1*u1)/(2*a1))+((u2*u2)/(2*a2));
    printf("Case %d: %lf %lf",i,td,bd);

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
