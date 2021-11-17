#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int arr[n+5],brr[n+5],visit[n+5];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i]>>brr[i];
        visit[i]=0;
    }
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==1)
        {
            cout<<"I="<<i<<endl;
            flag=0;

        }
        if(brr[i]==0)
        {
            visit[i]=1;
            continue;
        }
        else if(brr[i]<0)
        {
            visit[i-brr[i]]=1;
            arr[i-brr[i]]=arr[i];
        }
        else
        {
            visit[i+brr[i]]=1;
            arr[i+brr[i]]=arr[i];
        }
    }
    if(flag==1)
        cout<<"-1";
    else
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


}
int main()
{
    int tc;
   while(cin>>tc)
    {
        if(tc==0)
            break;
        solve(tc);
        cout<<endl;
    }
   return 0;
}
