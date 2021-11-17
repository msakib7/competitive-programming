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
          cout<<"node "<<i<<" is conected with: ";
          for(int j=0;j<v[i].size();j++)
            printf("%d ",v[i][j]);
            cout<<endl;
      }
      memset(visited,0,nod+5);
      memset(level,0,nod+5);
      bfs(7);
      printf("\nBFS with 7:\n");
      cout<<endl;
      for(int i=1;i<=nod;i++)
        printf("For %d level is: %d\n",i,level[i]);
    }
}
/*
15 16
10 15
15 20
20 25
10 30
30 47
47 50
25 45
45 65
15 35
35 55
20 40
50 55
35 40
55 60
40 60
60 65
*/
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
