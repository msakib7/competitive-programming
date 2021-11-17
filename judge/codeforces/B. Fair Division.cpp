#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ons=0,tws=0,sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        if(x==1)
            ons++;
        else
            tws++;
    }
    if(n==1)
        cout<<"No";
    else if(ons%2==0&&tws%2==0)
            cout<<"Yes";
     else if(ons%2==0&&tws%2==1&&ons>0)
            cout<<"Yes";

    else
        cout<<"No";
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
