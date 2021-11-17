#include<bits/stdc++.h>
using namespace std;
int mn=105;
int mx=-1;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<mn)
                mn=arr[i];
            if(arr[i]>mx)
                mx=arr[i];
        }
        int x,ans;
        x=(mn+mx)/2;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>x)
                ans+=arr[i]-x;
        }
        cout<<ans<<endl;
    }
  return 0;
}
