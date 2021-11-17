#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
   int arr[n+5];
   int mx = -1e9;
   for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        mx=max(mx,arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=mx)
            continue;
        if(i>1){
            if(arr[i]>arr[i-1])
            {
                printf("%d",i);
                return ;
            }
        }
        if(i<n){
            if(arr[i]>arr[i+1])
            {
                printf("%d",i);
                return;
            }
        }
    }
    printf("-1");

}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        solve(n);
        printf("\n");
    }
  return 0;
}
