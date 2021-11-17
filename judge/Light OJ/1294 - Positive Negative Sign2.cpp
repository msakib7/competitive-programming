#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int n,m,x=1,ans=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n/m;i++)
    {
        //printf("x=%d\n",x);
        if(i%2==1)
            ans-=(2*m)*x;
        else
            ans+=(2*m)*x-3;
        if(i%2==1)
            x+=2;
        else
            x++;

    }
    printf("Case %d: %d",t,ans);
}
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        solve(t);
        printf("\n");
    }
  return 0;
}
