#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int n;
    scanf("%d",&n);
    char stn[100][100];
    int x,y,z,mx=-1,mn=1000007,a,b;
    for(int i=1;i<=n;i++)
    {
        scanf("%s",&stn[i]);
        scanf("%d%d%d",&x,&y,&z);
        int p=x*y*z;
        if(p>mx)
        {
            mx=p;
            //stn.assign(stn1);
            a=i;

        }
        if(mn>p)
        {
            mn=p;
            //stn2.assign(stn);
            b=i;
        }
    }
    if(mx==mn)
        printf("Case %d: no thief",t);
    else
        printf("Case %d: %s took chocolate from %s",t,stn[a],stn[b]);
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

