#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,arr[200000],c=0,mx=40000000,flag,ans;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=0;
                //printf("sakib\n");
            }
            else
                flag=1;
        }
        if(flag==1&&mx>arr[i])
        {
            mx=arr[i];
            ans=i;
        }
    }
    if(flag==0)
        cout<<"-1";
    else
        cout<<ans+1;
     cout<<endl;
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
