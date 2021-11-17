#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    scanf("%d",&x);
    printf("%d ",x/2);
    printf("%d",x-(x/2));
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        solve();
        printf("\n");
    }
  return 0;
}
