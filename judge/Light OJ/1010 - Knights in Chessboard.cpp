#include<bits/stdc++.h>
using namespace std;
#define nl printf("\n")
#define bs printf(" ")
void solve(int t)
{
    int m,n,ans;
    scanf("%d%d",&n,&m);
    if(n==1||m==1)
        ans=n*m;
    else if(n==2||m==2)
    {
        int x;
        if(n==2)
            x=m;
        else
            x=n;
        if(x%4==1||x%4==3)
                ans=x+1;
        else if(x%4==2)
            ans=x+2;
        else
            ans=x;
    }
    else
    {
        if((n*m)%2==0)
            ans=(n*m)/2;
        else
            ans=((n*m)/2)+1;
    }
    printf("Case %d: %d",t,ans);

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        solve(i);
        nl;
    }
  return 0;
}
