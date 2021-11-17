#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(n==1)
    {
        if(t<10)cout<<t;
        else
            cout<<"-1";
    }
    else
    {
        if(t!=10)
        {
            for(int i=1;i<=n;i++)
                cout<<t;
        }
        else
        {
            cout<<1;
            for(int i=2;i<=n;i++)
                cout<<"0";
        }
    }
    cout<<endl;

  return 0;
}
