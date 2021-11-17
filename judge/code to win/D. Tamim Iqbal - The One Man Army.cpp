#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
      int b,c,ans;
      b=n*m;
      b=b-1;
      if(n==1)
        ans=m*6;
      else if(m==1)
      {
          ans=3*(b);
          ans+=6;
      }
      else
      {
          ans=(n-1)*3+((n*m)-(n-1))*6;
      }

      printf("Case %d: %d\n",i,ans);
      i++;
    }
  return 0;
}
