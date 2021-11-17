#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,flg=0;
    cin>>a;
    for(int i=3;i<=180;i++)
    {
        int x;
        x=(i-2)*180/i;
        if(x==a)
            flg=1;
    }
    if(flg==1)
        cout<<"YES";
    else
        cout<<"NO";
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
