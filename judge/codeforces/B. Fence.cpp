#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int>sum(200005);
    int cng=0,ans=1;
    for(int i=0;i<n;i++)
        sum[i+1]=arr[i]+sum[i];
    //cout<<sum<<endl;
    int ttl=1e9;
    for(int i=0;i<=n-k;i++)
    {
        cng=sum[i+k]-sum[i];
        //cout<<cng<<endl;
        if(cng<ttl)
        {
            ttl=cng;
            ans=i+1;
        }
    }
    cout<<ans<<endl;

  return 0;
}
