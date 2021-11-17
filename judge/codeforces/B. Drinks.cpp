#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int sum=0,arr;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr);
        sum+=arr;
    }
    double x=(double)sum/n;
    printf("%lf",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    printf("\n");
   return 0;
}
