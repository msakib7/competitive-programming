#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10][10],n=5,r,c;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
    {
        scanf("%d",&arr[i][j]);
        if(arr[i][j]==1)
        {
            r=i,c=j;
        }
    }
    int ans=0;
    ans+=abs(3-r);
    ans+=abs(3-c);
    printf("%d\n",ans);

   return 0;
}
