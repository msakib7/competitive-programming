#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
   long long n,m,sum=0;
   int cnt=0;
   scanf("%lld%lld",&n,&m);
   for(int i=n;i<=m;i++)
   {
       sum=0;
       for(int j=1;j<=i;j++)
        sum+=j;
        //printf("sum=%d\n",sum);
       if(sum%3==0)
        cnt++;
   }
   printf("Case %d: %d",t,cnt);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        solve(i);
        printf("\n");
    }
   return 0;
}
