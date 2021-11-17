#include<stdio.h>
#include<math.h>
#include<string.h>
void sort(int *v1,int r)
{
    int i,j,temp=0;
    for(i=0;i<r;i++)
        for(j=i;j<r;j++)
    {
        if(arr[i]>=arr[j])
            arr
    }
}
int main()
{
    int n,arr[1000];
    scanf("%d",&n);
    while(n--)
    {
        int r,ttl=0;
        scanf("%d",&r);
        for(int i=0;i<r;i++)
            scanf("%d",&arr[i]);
        sort(arr,r);
        int mdn=arr[r/2];
        for(int i=0;i<r;i++)
        {
            if(i==mdn)continue;
            ttl+=abs(arr[mdn]-arr[i]);
        }
        printf("%d\n",ttl);
    }
  return 0;
}
