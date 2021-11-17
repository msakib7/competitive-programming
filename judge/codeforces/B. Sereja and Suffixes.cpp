#include<bits/stdc++.h>
using namespace std;
int N,M,T;
bool chk[100005];
int main()
{
    int i,j,k;
    scanf("%d%d",&N,&T);
    vector<int> v(100005),ans(100005);
    for(i=1;i<=N;i++)
        scanf("%d",&v[i]);
    k=0;
    for(i=N;i>=1;i--)
    {
        if(chk[v[i]]==0)    k++;
        ans[i]=k;
        chk[v[i]]=1;
    }
    while(T--)
    {
        scanf("%d",&k);
        printf("%d\n",ans[k]);
    }
    return 0;
}
