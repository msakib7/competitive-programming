#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int arr[4],mx=-5,sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
        sum+=arr[i];
    }
    if(sum==0)
        cout<<"1 1 1";
    else{
    for(int i=0;i<3;i++)
     {
        if(mx==arr[i])
            cout<<mx-arr[i]<<" ";
        else
        {
            cout<<mx-arr[i]+1<<" ";
        }
     }
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
