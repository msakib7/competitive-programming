#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,ans;
    cin>>n>>m;
    ans=(n/3)*(m/3);
    cout<<ans;
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
