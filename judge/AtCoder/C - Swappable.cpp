#include<bits/stdc++.h>
using namespace std;
int const mx=1e8;
int pvt[mx];
int main()
{
    int n,mxx=-1;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0,x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {

        }
    }
    cout<<ans<<endl;
}
