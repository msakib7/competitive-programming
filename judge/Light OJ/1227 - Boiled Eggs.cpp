#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    int n,p,q,arr[50],ans=0;
    cin>>n>>p>>q;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        p-=1;
        q-=arr[i];

        if(p>=0&&q>=0)
            ans++;
    }
    cout<<"Case "<<tc<<": "<<ans;

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
    return 0;
}
