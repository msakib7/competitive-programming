#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int>v;
    int x,ans=-1,mx=-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        v.push_back(x);
        if(mx<x)
            mx=x;
    }
    //printf("mx=%d\n",mx);
    //printf("%d\n",v[n-1]);
        for(int i=0;i<n;i++){
                ans=0;
            if((v[i]>v[1-i]&&i<n)||(v[i]>v[1+i]&&i>0))
            {
                ans=i+1;
                break;
            }
        }
    printf("%d",ans);

}
int main()
{
    int tc,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        solve(n);
        printf("\n");
    }
  return 0;
}
