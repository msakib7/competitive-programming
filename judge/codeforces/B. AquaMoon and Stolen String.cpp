#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        string ans="";
        cin>>n>>m;
        n=2*n-1;
        string stn[n+2];
        for(int i=0;i<n;i++)
            cin>>stn[i];
        for(int i=0;i<m;i++)
        {
            map<char,int>mp;
            for(int j=0;j<n;j++)
            {
                if(mp[stn[j][i]]==0)
                    mp[stn[j][i]]=1;
                else
                    mp[stn[j][i]]=0;
            }
            for(auto it:mp)
            {
                if(it.second!=0)
                {
                    ans+=it.first;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
   return 0;
}
