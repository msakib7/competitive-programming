#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int i,x,v1=0,v2=0,v3=0,v4=0,ans=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==1)v1++;
        if(x==2)v2++;
        if(x==3)v3++;
        if(x==4)v4++;
    }
    ans+=v4;
    while(v1&&v3)
    {
        v1--;
        v3--;
        ans++;
    }
    ans+=v3;
    ans+=(v2*2)/4;
    v2=(v2*2)%4;
    ans+=v1/4;
    v1=v1%4;
    if(v2)
        {ans++;v1-=2;}
    if(v1>0)
        ans++;
    return ans;


}
int main()
{
    int n,ans;
    cin>>n;
    ans=solve(n);
    printf("%d\n",ans);

  return 0;
}
