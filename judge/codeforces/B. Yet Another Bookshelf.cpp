#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int arr[n+5],x,y,cnt=0;
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<n;i++)
        if(arr[i]==1)
    {
        x=i;
        break;
    }
    for(int i=n;i>0;i--)
        if(arr[i]==1)
    {
        y=i;
        break;
    }
    //printf("x=%d y=%d\n",x,y);
    int c;

    if(x!=y)
    {
        for(int i=x;i<=y;i++)
            if(arr[i]==0)
            cnt++;
        printf("%d",cnt);
    }
    else
        printf("0");
}
int main()
{
    int tc,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        solve(n);
        printf("\n");
    }
   return 0;
}
