#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int>v;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    bool sakib=true;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1]>200)
        {
            sakib=false;
            break;
        }
    }
    if((1422-v[n-1])*2>200)
        sakib=false;
    if(sakib)
        printf("POSSIBLE");
    else
        printf("IMPOSSIBLE");
}
int main()
{
    int n;
    while(scanf("%d",&n)!=0)
    {
        if(n==0)
            break;
        solve(n);
        printf("\n");
    }
  return 0;
}
