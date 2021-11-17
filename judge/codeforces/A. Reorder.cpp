#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int>vec;
    int n,m,sum1=0,x;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        vec.push_back(x);
        sum1+=x;

    }
    if(sum1==m)
        printf("YES");
    else
        printf("NO");

}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        solve();
        printf("\n");
    }
  return 0;
}
