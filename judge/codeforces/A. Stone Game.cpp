#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,mnp,mxp;
    cin>>n;
    int arr[n+5],x=n+100,y=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(x>arr[i])
        {
            x=arr[i];
            mnp=i;
        }
        if(y<arr[i])
        {
            y=arr[i];
            mxp=i;
        }
    }
    if(mnp<mxp)
    {
        x=mnp;
        y=mxp;
    }
    else
    {
        x=mxp;
        y=mnp;
    }
    int ans1,ans2,ans3=0;
    ans1=y;
    ans2=n-x+1;
    ans3+=n-y+1;
    ans3+=x;
    if(ans1<ans2)
    {
        if(ans3<ans1)
            cout<<ans3;
        else
            cout<<ans1;
    }
    else
    {
        if(ans3<ans2)
            cout<<ans3;
        else
            cout<<ans2;
    }

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
