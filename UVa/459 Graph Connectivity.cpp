#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool vis[100];
void dfs(int n)
{
    if(vis[n]==0)
    {
        vis[n]=1;
        for(int i=0;i<adj[n].size();i++)
        {
            int x=adj[n][i];
            if(vis[x]==0)
                dfs(x);
        }
    }
}
int main()
{
    int tc;
    string stn,c;
    cin>>tc;
    for(int tt=1;tt<=tc;tt++)
    {
        cin>>c;
        int edg=c[0]-'A';
        getline(cin,stn);
        while(getline(cin,stn))
        {
            if(stn.length()==0)
                break;
            adj[stn[0]-'A'].push_back(stn[1]-'A');
            adj[stn[1]-'A'].push_back(stn[0]-'A');
        }
        int cnt=0;
        for(int i=0;i<=edg;i++)
        {
            if(vis[i]==0)
            {
                cnt++;
                dfs(i);
            }
        }
        cout<<cnt<<endl;
        if(tt!=tc)
        {
            cout<<endl;
        }
       memset(vis,0,sizeof vis);
       memset(adj,0,sizeof adj);
    }
  return 0;
}
