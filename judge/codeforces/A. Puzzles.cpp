#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=10000;
    for(int i=0,j=n;j<m;i++,j++)
    {
        if(arr[j]-arr[i]<ans)
            ans=arr[j]-arr[i];
    }
    cout<<ans<<endl;

 return 0;
}
