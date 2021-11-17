#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string stn;
    int p=0;
    cin>>stn;
    char ch=stn[0];
    for(int i=0;i<stn.size();i++)
    {
      if(stn[i]<ch)
      {
          ch=stn[i];
          p=i;
      }
    }
    cout<<ch<<" ";
    for(int i=0;i<stn.size();i++)
    {
        if(i!=p)
            cout<<stn[i];
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
