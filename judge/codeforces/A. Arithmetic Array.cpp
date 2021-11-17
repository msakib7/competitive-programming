#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;

    int arr[n+5],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int ans=0;
    if(sum<0)
        ans=1;
    else
    {
        ans=sum-n;
    }
    if(ans<0)
        ans=1;
    cout<<ans;

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
