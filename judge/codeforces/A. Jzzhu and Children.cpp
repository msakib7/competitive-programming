#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mx=-1;
    cin>>n>>m;
    int arr[n+5];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=mx)
        {
            mx=arr[i];
            ans=i+1;
        }
    }
    cout<<ans<<endl;

 return 0;
}
