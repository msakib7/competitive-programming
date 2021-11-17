#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int n,cnt=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==1)
            cnt++;
        n/=2;
    }
    if(cnt%2==0)
        printf("Case %d: even",t);
    else
        printf("Case %d: odd",t);


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
