
#include<bits/stdc++.h>
using namespace std;
int solve(int n,int m)
{
    if(n>m)
        swap(n,m);
    if(n==1)
        return m;
    if(n==2)
    {
        if(m%4==1||m%4==3)
            return m+1;
        else if(m%4==2)
            return m+2;
        else
            return m;
    }
    return (n*m+1)/2;

}
int main()
{
    int n,m;
    while(true)
    {
        cin>>n>>m;
        if(n+m==0)
            break;
        int ans=solve(n,m);
        printf("%d knights may be placed on a %d row %d column board.\n",ans,n,m);
    }
  return 0;
}
