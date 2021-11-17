#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        cout<<i;
        if(i!=1)
           cout<<" ";
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
