#include<bits/stdc++.h>
using namespace std;
void solve(int t)
{
    vector<int>vec;
    int n,m,x,ans=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
        if(i<n-m+1)
            ans+=x;
    }
    printf("Case %d: %d",t,ans);


}
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        solve(t);
        printf("\n");
    }
  return 0;
}
