#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        arr[x]=i;
    }
    int m;
    cin>>m;
    long long ans=0,ans1=0;
    for(int i=1;i<=m;i++)
    {
        int y;
        cin>>y;
        ans+=arr[y];
        ans1+=n-arr[y]+1;
    }
    cout<<ans<<" "<<ans1<<endl;

 return 0;
}
