#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int d1,d2,y1,y2,ans=0;
    char arr[10],brr[10],ch;
    scanf("%s%d%c%d",arr,&d1,&ch,&y1);
    scanf("%s%d%c%d",brr,&d2,&ch,&y2);
    if(strcmp(arr,"January")==0||(strcmp(arr,"February")==0&&d1<30))
       y1=y1;
    else
        y1++;
    if(strcmp(brr,"January")==0||(strcmp(brr,"February")==0&&d2<29))
        y2--;
     //printf("y1=%d y2=%d\n",y1,y2);
     /*
    for(int i=y1;i<=y2;i++)
        if (((i%4==0)&&(i%100!=0))||(i%400==0))
            ans++;
            */
     int x,y,z;
     x=(y2/4)-(y1-1)/4;
     y=(y2/100)-(y1-1)/100;
     z=(y2/400)-(y2-1)/400;
     //printf("x=%d y=%d Z=%d \n",x,y,z);
     ans=(x-y)+z;
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
