#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,ans=0,u=0,d=0,c=1e8;
    vector<int>v1,v2,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v1.push_back(a);
        u+=a;
        x.push_back(u);
    }
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v2.push_back(a);
    }
    for(int i=n-1;i>=0;i--)
    {
        d+=v2[i];
        y.push_back(d);
    }
    for(int i=0;i<n;i++)
    {
        c=min(max((x[n-1]-x[i]),(y[0]-y[i])),c);
    }
    cout<<c;

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
