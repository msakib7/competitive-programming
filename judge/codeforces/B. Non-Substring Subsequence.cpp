#include<bits/stdc++.h>
using namespace std;
void solve(int n,int q)
{
    string stn;
    int l,r;
    cin>>stn;
    while(q--)
    {
        cin>>l>>r;
        l--,r--;
        int pos=0;
        for(int i=0;i<l;i++)
        {
            if(stn[i]==stn[l])
                pos=1;
        }
        for(int i=r+1;i<n;i++)
        {
            if(stn[r]==stn[i])
                pos=1;
        }
       if(pos)
            cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,q;
        cin>>n>>q;
        solve(n,q);
    }
  return 0;
}
