#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int n,p,q;
    scanf("%d%d%d",&n,&p,&q);
    int arr[n+5],ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(ans<p&&sum<=q)
            ans++;
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

