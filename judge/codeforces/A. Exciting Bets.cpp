#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
            {
                cout<<"0"<<" "<<"0"<<endl;
            }
        else
        {
            ll x,y,ans,di;
            di=abs(a-b);
            x=a%di;
            y=min(x,di-x);
            cout<<di<<" "<<y<<endl;
        }
    }
  return 0;
}
