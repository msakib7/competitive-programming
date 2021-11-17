#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m)
{
    vector<int>v1;
    vector<int>v2;
    int a,b,cnt=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        v1.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b);
        for(int j=0;j<n;j++)
            if(b==v1[j])
             cnt++;
    }
    printf("%d",cnt);
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=0)
    {
        if(n+m==0)
            break;
        solve(n,m);
        printf("\n");
    }
  return 0;
}
