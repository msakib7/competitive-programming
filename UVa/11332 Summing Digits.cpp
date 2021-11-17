#include<bits/stdc++.h>
using namespace std;
int sakib(int x)
{
    int ttl=0,n;
    n=x;
    if(n%10==0)
        return n;
    else{
    while(n>0)
    {
      ttl+=n%10;
      n/=10;
    }
    sakib(ttl+0);
  }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=0)
    {
        if(n==0)
            break;
        printf("%d\n",sakib(n));
    }
    return 0;
}
