#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k,ans=0;
        cin>>n>>k;
        ans=ceil((double)k/n);
        cout<<ans<<endl;
        ans+=k;
        cout<<ans<<endl;
    }
   return 0;
}
