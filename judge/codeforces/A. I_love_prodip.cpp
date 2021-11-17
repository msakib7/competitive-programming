#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    int mn,mx,x;
    mx=arr[0];
    mn=arr[0];
    for(int i=1;i<n;i++)
    {
       if(arr[i]>mx)
       {
           mx=arr[i];
           cnt++;
       }
       if(arr[i]<mn)
       {
           mn=arr[i];
           cnt++;
       }
    }
    cout<<cnt<<endl;

  return 0;
}
