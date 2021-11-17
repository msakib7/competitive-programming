#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,flag=0,a,b;
    cin>>n;
    if(n/10==0)
        cout<<n;
    else {
    for(int i=9;i>0;i--)
    {
        for(int j=1;j<10;j++)
        {
            if(i==j)
                continue;
            else
            {
                if(i+j==n)
                    {
                        a=i,b=j;
                        flag=1;
                    }

            }
        }
    }
    if(flag==1)
        cout<<a<<b;
    else
        cout<<"-1";
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
