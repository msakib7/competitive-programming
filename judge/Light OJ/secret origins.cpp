#include<stdio.h>
int main()
{
    int tc,n;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%d",&n);
        printf("Case %d: %d",i,n+4);
    }
    return 0;
}
