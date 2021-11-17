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
    long long mv=0,l,r;
    for(int i=0;i<n-1;i++)
    {
        int x=0;
        if(arr[i+1]<arr[i])
        {
            x=arr[i]-arr[i+1];
            mv+=x;
            arr[i+1]=arr[i];
            //cout<<x<<endl;
            //cout<<mv<<endl;
        }
    }
    cout<<mv<<endl;
  return 0;
}
