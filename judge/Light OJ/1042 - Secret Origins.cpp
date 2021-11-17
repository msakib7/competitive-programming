#include<bits/stdc++.h>
using namespace std;
int cnt2(int x)
{
    int cn=0;
    while(x!=0)
    {
        if(x%2==1)
            cn++;
        x/=2;
    }
    return cn;
}

void solve(int tc)
{
    int n,cnt=0,ans;
    cin>>n;
    int x=n;
    while(n!=0)
    {
        if(n%2==1)
            cnt++;
        n/=2;
    }
    for(int i=x+1;i>x;i++)
    {

        if(cnt==cnt2(i))
        {
            ans=i;
            break;
        }
    }
    printf("Case %d: %d",tc,ans);
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        printf("\n");
    }
  return 0;
}
