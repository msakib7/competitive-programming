#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<ll>v;
int main()
{
   ll n,k,a,ans;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
       cin>>a;
       v.pb(a);
   }
   sort(v.begin(),v.end());
   if(k==0)
   {
       if(v[0]==1)
        ans=-1;
       else
        ans=1;
   }
  else if(n==k)
    ans=1000000000;
   else
   {
       if(v[k-1]==v[k])
        ans=-1;
       else
        ans=v[k-1];
   }
   cout<<ans<<endl;

  return 0;
}
