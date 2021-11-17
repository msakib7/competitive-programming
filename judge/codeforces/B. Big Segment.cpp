#include<bits/stdc++.h>
using namespace std;
int x[111111],y[111111];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    int mx=x[1];
    int mn=y[1];
    for(int i=1;i<=n;i++)
    {
       mx=max(mx,y[i]);
       mn=min(mn,x[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(mn==x[i]&&mx==y[i])
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

  return 0;
}
