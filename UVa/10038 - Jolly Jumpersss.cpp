#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[10000],brr[10000];
    while(scanf("%d",&n)!=0)
    {
        int flg=0;
        int mx=-9999999;
        int mn=99999999;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            if(mx<arr[i])
                mx=arr[i];
            if(mn>arr[i])
                mn=arr[i];
        }
        int x=mx-mn;
        //printf("x=%d mx=%d mn=%d \n",x,mx,mn);
        for(int i=1;i<n;i++)
        {
            int y;
            y=abs(arr[i]-arr[i+1]);
            //printf("abslute vlue=%d \n",y);
            brr[i]=y;
            if(y>=1&&y<=n-1)
                flg=0;
            else
                {
                    flg=1;
                    break;
                }
                x--;
        }

        if(flg==0)
            printf("        Jolly\n");
        else
            printf("         Not jolly\n");
    }

   return 0;
}
