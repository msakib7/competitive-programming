#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n;
    for(int i=2; ;i++)
    {
        x=pow(2,i);
        x--;
        if(n%x==0)
        {
            cout<<n/x<<endl;
            break;
        }
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
        solve();

  return 0;
}
