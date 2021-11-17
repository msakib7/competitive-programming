#include<bits/stdc++.h>
using namespace std;
#define   nl  printf("\n")
#define   spc printf(" ");
void solve()
{
    int n,arr[100],brr[100],cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i],&brr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(arr[i]==brr[j])
            cnt++;
    }
    printf("%d",cnt);
}
int main()
{
    solve();
    nl;
  return 0;
}
