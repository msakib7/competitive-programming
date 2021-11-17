#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,cnt=0;
    cin>>n>>m;
    while(1)
    {

        if(n%m==0)
           {
                m++;
                cnt++;
           }
        else
        {
            n/=m;
            cnt++;
        }

        if(n==0)
            break;
    }
    cout<<cnt<<endl;
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
