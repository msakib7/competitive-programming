#include<bits/stdc++.h>
using namespace std;
void solve(int i)
{
    int n,m,t;
    scanf("%d%d",&n,&m);
    t=abs(n-m);
    int res;
    res=19+t*4+n*4;
    printf("Case %d: %d\n",i,res);

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        solve(i);
    }
}
