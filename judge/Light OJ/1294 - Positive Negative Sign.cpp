#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int n,m;
    scanf("%d%d",&n,&m);
    int ans=0,cnt=0;
    if(m==1)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
                ans-=i;
            else
                ans+=i;
        }
    }
    else {
        for(int i=1;i<=n;i++)
        {
            if(i%m==1)
                cnt++;
            if(cnt%2==1)
                ans-=i;
            else
                ans+=i;
        }
   }
    printf("Case %d: %d",t,ans);
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
