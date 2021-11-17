#include<bits/stdc++.h>
using namespace std;
vector<int>v;
bool visit[100]={0};
int lvl[100];
void bfs(int so)
{
    queue<int>q;
    visit[so]=1;
    lvl[so]=0;
    q.push(so);
    while(!q.empty())
    {
        int next=q.front();
        q.pop();
        if(visit[next]==0)
        {
            visit[next]=1;
            lvl[next]=
        }
    }
}
int main()
{
    int x,y,so,node,edg;
    cin>>node>>edg;
    for(int i=1;i<=edg;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin>>so;
    bfs(so);
}


#include<bits/stdc++.h>
using namespace std;
int visited[110];
int level[110];
vector<int>v[110];

void bfs(int n)
{
   level[n]=0;
   visited[n]=1;
   queue<int>q;
   q.push(n);
   while(!q.empty())
   {
      n=q.front();
      for(int i=0;i<v[n].size();i++)
      {
          int p=v[n][i];
          if(visited[p]==0)
          {
              visited[p]=1;
              level[p]=level[n]+1;
              q.push(p);
          }
      }
      q.pop();
   }
}
int main()
{
    int nod,edg;
    while(scanf("%d%d",&nod,&edg)==2)
    {
       for(int i=0;i<edg;i++)
       {
           int x,y;
           cin>>x>>y;
           v[x].push_back(y);
           v[y].push_back(x);
       }
      for(int i=1;i<=nod;i++)
      {
          cout<<"node="<<i<<": ";
          for(int j=0;j<v[i].size();j++)
            printf("%d ",v[i][j]);
            cout<<endl;
      }
      memset(visited,0,nod+5);
      memset(level,0,nod+5);
      bfs(7);
      cout<<endl;
      for(int i=1;i<=nod;i++)
        printf("level %d: %d\n",i,level[i]);
    }
}
/*
7 8
1 2
1 5
5 2
5 3
2 4
3 6
3 4
4 7
*/

