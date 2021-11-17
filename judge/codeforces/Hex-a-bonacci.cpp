#include<bits/stdc++.h>
using namespace std;

void solve(int t)
{
    long long int hex[100009],n;
    scanf("%lld%lld%lld%lld%lld%lld%lld",&hex[0],&hex[1],&hex[2],&hex[3],&hex[4],&hex[5],&n);
    for(int i=6;i<=n;i++)
    {
        hex[i]=(hex[i-1]+hex[i-2]+hex[i-3]+hex[i-4]+hex[i-5]+hex[i-6])%10000007;
    }
    printf("Case %d: %lld\n",t,hex[n]%10000007);

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
