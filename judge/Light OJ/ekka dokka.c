#include<stdio.h>
#include<string.h>
#define ll long long
int main()
{
    int tc,odd,flg=0;
    scanf("%d",&tc);
    int j;
    for(int i=1;i<=tc;i++)
    {
        ll n;
        scanf("%lld",&n);
        for(j=2;j<=n/2;j+=2)
        {
            if(n%j==0)
                odd=n/j;
            if(odd%2==1)
            {
                flg=1;
                break;
            }
        }
        if(flg==1)
            printf("Case %d: %lld %lld",i,odd,j);
        else
            printf("Case %d: Impossible",i);
        printf("\n");
    }
  return 0;
}
