#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,sum=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int ans=0;
    double x=(double)sum/n;
    //cout<<sum<<" "<<x<<endl;
    if(x==sum/n)
    {
        for(int i=0;i<n;i++)
            if(arr[i]>x)
             ans++;
        cout<<ans;
    }
    else if(x<sum/2||x>sum/2)
        cout<<"-1";
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
