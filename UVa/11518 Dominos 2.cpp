#include<bits/stdc++.h>
using namespace std;
const int mxn=1e4+5;
vector<int>adj[mxn];
bool vis[mxn];
void dfsvis(int n)
{
    vis[n]=true;
    for(int i=0;i<adj[n].size();++i)
    {
        int x=adj[n][i];
        if(vis[x]==false)
            dfsvis(x);
    }
}
void solve()
{
    int n,m,l;
    cin>>n>>m>>l;
    for(int i=0;i<n+1;i++)
    {
        vis[i]=false;
        adj[i].clear();
    }
    while(m--)
    {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    while(l--)
    {
        int x;cin>>x;
        dfsvis(x);
    }
    int cnt=0;
    for(int i=1;i<n+1;i++)
    {
        if(vis[i]==true)cnt++;
    }
    cout<<cnt<<endl;

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
