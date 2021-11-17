#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    int x1,y1,x2,y2;
    x1=1,y1=1;
    x2=n,y2=m;
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
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
