#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    int brr[m+7];
    for(int i=0;i<m;i++)
        cin>>brr[i];
    int mx=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            if(brr[j]%arr[i]==0)
                mx=max(mx,brr[j]/arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(brr[j]%arr[i]==0&&brr[j]/arr[i]==mx)
                ans++;
        }
    }
    cout<<ans<<endl;

  return 0;
}
