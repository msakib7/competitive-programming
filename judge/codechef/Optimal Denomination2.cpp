#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    long long arr[n+5],cnt=0,p;
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]&1)
                {
                    cnt++;
                    p=i;
                }
        }
    sort(arr,arr+n);
    long long mn=arr[0],mx=arr[n-1];
    if(cnt>0)
    {
        int flg=0,ans=0;
       if(mn==mx)
            ans=n;
       else
        {

            for(int i=0;i<n-1;i++)
            {
                if(arr[i]%mn>0||mn==1)
                   {
                         flg=1;
                         break;
                   }
            }
            //cout<<flg<<" ";
            if(flg==1)
            {
                for(int i=0;i<n-1;i++)
                {
                    ans+=arr[i];
                }
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    ans+=arr[i]%mn;
                }
            }
            ans++;
        }
       cout<<ans;
    }
    else
    {
        int ans=0,flg=0;
        if(mn==mx)
            ans=n;
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]%mn>0)
                {
                    flg=1;
                    break;
                }
            }
            if(flg==1)
            {
                for(int i=0;i<n-1;i++)
                    ans+=arr[i]/2;
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    ans+=arr[i]/mn;
                }
            }
            ans++;
        }
       cout<<ans;
    }
   //cout<<n<<endl;
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
