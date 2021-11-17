#include<bits/stdc++.h>
using namespace std;
void solve(int n,int j)
{
    int x,ans;
    int arr[n+2];
    for(int i=1;i<=n;i++)
        arr[i]=0;

    for(int i=1;i<=j;i++)
    {
        for(int c=1;c<=n;c++)
            {
                cin>>x;
                arr[c]+=x;
            }
    }
    int mx=-1;
    for(int i=1;i<=n;i++)
    {
        if(mx<=arr[i])
        {
            mx=arr[i];
            ans=i;
        }
    }
    cout<<ans;

}
int main()
{
    int n,j;
    while(scanf("%d%d",&n,&j)!=EOF)
    {
       solve(n,j);
       cout<<endl;
    }
  return 0;
}
