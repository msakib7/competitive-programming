#include<bits/stdc++.h>
using namespace std;
#define  pi acos(-1.0)
void solve(int t)
{
    double R,n,r,theta;
    scanf("%lf%lf",&R,&n);
    theta=pi/n;
    r=R*sin(theta)/(1+sin(theta));
    printf("Case %d: %lf",t,r);

}
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        printf("\n");
    }
   return 0;
}
