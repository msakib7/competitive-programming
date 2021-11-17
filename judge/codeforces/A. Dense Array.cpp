#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,arr[100],cnt1=0,cnt2=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
       int a=max(arr[i],arr[i+1]);
        int b=min(arr[i],arr[i+1]);

        if((a/b)>2)
        {
            while(b<a)
            {
                b*=2;
                cnt++;
            }
            while(b<a)
            {
                a/=2;
                cnt2++;
            }
            cnt+=min(cnt1,cnt2);
        }
    }
    cout<<cnt;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
