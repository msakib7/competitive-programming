#include<bits/stdc++.h>
using namespace std;
const int mxn=1e6;
int dvsr[mxn+30];
vector<int>vec[250];

void sieve()
{
    for(int i=1;i<mxn+5;i++)
    {
        for(int j=i;j<mxn+5;j+=i)
            {
                dvsr[j]++;
            }
    }
    for(int i=1;i<=1000000;i++)
    {
        vec[dvsr[i]].push_back(i);
    }
    for(int i=1;i<240;i++)
    {
        sort(vec[i].begin(),vec[i].end());
    }
}
void solve()
{
    int l,r,x,ans=0;
    cin>>l>>r>>x;
    int up,lo;
    lo=lower_bound(vec[x].begin(),vec[x].end(),l)-vec[x].begin();
    up=upper_bound(vec[x].begin(),vec[x].end(),r)-vec[x].begin();
    ans=up-lo;
    cout<<ans;
}
int main()
{
    sieve();
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
