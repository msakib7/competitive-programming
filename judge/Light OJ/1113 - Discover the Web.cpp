#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    stack<string>stk;
    string stn,x;
    x="http://www.lightoj.com/";
    stk.push(x);
    while(cin>>stn)
    {
      if(stn[0]=='Q')
            break;
      else if(stn[0]=='V')
      {
          cin>>x;
          stk.push_back
      }
    }
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
  return 0;
}
