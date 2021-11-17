#include<bits/stdc++.h>
using namespace std;
#define nl printf("\n")
#define bs printf(" ")
#define ll long long

void solve(int t)
{
    ll n;
    scanf("%lld",&n);
    if(n%2==0)
    {
        int x=n;
        for(int m=2;;m+=2)
        {
            x/=2;
            if(x%2==1)
            {
                printf("Case %d: %d %d",t,x,m);
                break;
            }
        }
    }
    else
        printf("Case %d: Impossible",t);
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        nl;
    }
   return 0;
}

