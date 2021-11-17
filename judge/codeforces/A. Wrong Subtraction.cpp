#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    scanf("%d%d",&n,&m);
    while(cnt<m)
    {
        if(n%10==0)
            n/=10;
        else
            n-=1;
        cnt++;
    }
    //printf("%d\n",cnt);
    printf("%d\n",n);

  return 0;
}
