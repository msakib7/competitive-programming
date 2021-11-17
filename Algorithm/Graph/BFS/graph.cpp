#include<bits/stdc++.h>
using namespace std;
int main()
{

    int node,edge;
    while(scanf("%d%d",&node,&edge)==2)
    {
        vector<int>v[node+5];
        for(int i=1;i<=edge;i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
      for(int i=1;i<=node;i++)
      {
          printf("Node=%d: ",i);
          for(int j=0;j<v[i].size();j++)
            printf("%d ",v[i][j]);
          printf("\n");
      }
    }

}
