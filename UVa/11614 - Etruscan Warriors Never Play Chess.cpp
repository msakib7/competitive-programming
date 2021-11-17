#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    scanf("%lld",&n);
    long long x=(-1+sqrt(1+8*n))/2;
    printf("%d",x);
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
