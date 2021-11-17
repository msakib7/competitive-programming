#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,l,r;
    cin>>n>>l>>r;
   vector<int>arr;
    for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
    sort(arr.begin(),arr.end());
    ll cnt=0;
    for(int i=0;i<n-1;i++)
    {
        int p,q,lo,hi;
        p=l-arr[i];
        if(p<=arr[i])
           p=arr[i];
        q=r-arr[i];
        lo=lower_bound(arr.begin(),arr.end(),p)-arr.begin();
        hi=upper_bound(arr.begin(),arr.end(),q)-arr.begin();

        if(lo<=i)
            lo=i+1;
        if(hi<=lo)
                continue;
        //cout<<hi<<" "<<lo<<endl;
        cnt+=hi-lo;
    }
    cout<<cnt;
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
