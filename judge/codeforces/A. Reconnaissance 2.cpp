#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int l=1,r=n;
    int mn=abs(arr[1]-arr[n]);
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i+1])<mn)
        {
            mn=abs(arr[i]-arr[i+1]);
            l=i,r=i+1;
        }
    }
    cout<<l<<" "<<r<<endl;

  return 0;
}
