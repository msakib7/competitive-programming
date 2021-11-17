#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int arr[4000],brr[4000],j=1,flg=0;
    for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(int i=1;i<n;i++)
    {
        int x=abs(arr[i+1]-arr[i]);
        brr[j]=x;
        j++;
    }
    sort(brr,brr+j);
    for(int j=1;j<n;j++)
        {
            if(brr[j]!=j)
                flg=1;
            break;
        }
        if(flg==0)
            printf("Jolly");
        else
            printf("Not jolly");


}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        solve(n);
        printf("\n");
    }
  return 0;
}
