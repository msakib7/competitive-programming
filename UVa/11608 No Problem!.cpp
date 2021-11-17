#include<bits/stdc++.h>
using namespace std;
void solve(int n,int c)
{
    int arr[105],brr[105];
    for(int i=0;i<12;i++)
            scanf("%d",&arr[i]);
    for(int i=0;i<12;i++)
            scanf("%d",&brr[i]);
    int x=n;
    printf("Case %d:\n",c);
    for(int i=0;i<12;i++)
    {
        if(brr[i]<=n)
        {
            printf("No problem! :D\n");
            n-=brr[i];
        }
        else
            printf("No problem. :(\n");
        n+=arr[i];
    }
}
int main()
{
    int n,c=1;
    while(scanf("%d",&n)!=0)
    {
        if(n<0)
            break;
        solve(n,c);
        c++;
    }
  return 0;
}
