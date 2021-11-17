#include<bits/stdc++.h>
using namespace std;
long long k;
long long joshep(long long n)
{
    if(n==1)return 1;
    return(joshep(n-1)+k-1)%n+1;
}
void solve(int tc)
{
    long long n;
    cin>>n>>k;
    cout<<"Case "<<tc<<": ";
    cout<<joshep(n)<<endl;;
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
    }
   return 0;
}
