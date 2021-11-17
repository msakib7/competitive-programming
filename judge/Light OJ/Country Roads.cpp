#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define endl '\n'
#define PB push_back
#define F first
#define S second
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int const mxn=512;
int const inf=1e5;

int dis[mxn];
vii adj[mxn];

void dijkstra(int s,int n)
{
    for(int i=0;i<n;i++)dis[i]=inf;
    dis[s]=0;
    priority_queue<pll,vll,greater<pii>>pq;
    pq.push({0,s});
    while(!pq.empty())
    {
        int u=pq.top().S;
        int cd=pq.top().F;
        pq.pop();

        if(dis[u]<cd)continue;

        for(auto e:adj[u])
        {
            int v=e.F;
            int w=e.S;
            int mx=max(cd,w);
            if(mx<dis[v])
            {
                dis[v]=mx;
                pq.push({dis[v],v});
            }
        }
    }
}
int main()
{
    optimize();
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int nod,edg;
        cin>>nod>>edg;
        for(int i=0;i<nod;i++)adj[i].clear();

        for(int i=0;i<edg;i++)
        {
            int u,v,w;cin>>u>>v>>w;
            adj[u].PB({v,w});
            adj[v].PB({u,w});
        }

        int s;cin>>s;

        dijkstra(s,nod);

        cout<<"Case "<<tc<<":"<<endl;
        for(int i=0;i<nod;i++)
        {
            if(dis[i]==inf)cout<<"Impossible"<<endl;
            else
                cout<<dis[i]<<endl;
        }
    }
   return 0;
}
