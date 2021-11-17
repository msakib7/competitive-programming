#include<bits/stdc++.h>
using namespace std;
#define ll long long
double skb[1000005];
int main()
{
    for(ll i=1;i<=1000000;i++)
        skb[i]=skb[i-1]+ log10(i);
    ll tc,n,base,ans;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>n>>base;
        if(n==0)
            ans=0;
        else
        {
            ans=(int)(skb[n]/log10(base));
        }
        printf("Case %d: %lld\n",i,ans+1);
    }
  return 0;
}
