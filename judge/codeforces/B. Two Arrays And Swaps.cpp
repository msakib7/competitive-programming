#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5],brr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    sort(arr,arr+n);
    sort(brr,brr+n);
    int j=n-1;
    int i=0;
    int sum=0;
    while(k--)
    {
        if(arr[i]<brr[j])
        {
            arr[i]=brr[j];
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
  return 0;
}
