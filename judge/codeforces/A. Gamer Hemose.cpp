#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,h;
    cin>>n>>h;
    ll arr[n+5];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll mx,mn,ans=0,sum=0;
     mx=arr[n-1];
     mn=arr[n-2];
     sum=mx+mn;
     if(h<=mx)ans=1;
     else if(h<=sum)ans=2;
     else{
          if(h%sum==0)ans=(h/sum)*2;
          else
            {
                ans=(h/sum)*2;
                if(h%sum>mx)ans+=2;
                else
                ans+=1;
            }
    }
    cout<<ans;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
