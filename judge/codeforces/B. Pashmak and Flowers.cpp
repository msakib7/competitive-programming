#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int ans=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[0])
            cnt1++;
        if(arr[n-1]==arr[i])
            cnt2++;
    }
    if(arr[0]==arr[n-1])
    {
        cout<<"0"<<" "<<(long long)n*(n-1)/2<<endl;
    }
    else
    {
       cout<<arr[n-1]-arr[0]<<" "<<(long long)cnt1*cnt2;
    }

  return 0;
}
