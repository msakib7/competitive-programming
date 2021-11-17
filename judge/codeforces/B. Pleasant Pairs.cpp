#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=1;i<n+1;i++)
        cin>>arr[i];
    int ans=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=arr[i]-i;j<n+1;j+=arr[i])
        {
            if(j>=0)
                if(arr[i]*arr[j]==i+j&&i<j)
                ans++;
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
