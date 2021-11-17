#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n)!=0)

    {
        if(n==0)
        break;

        while(1)
        {
            if(n/10==0)
                break;
             int ttl=0;
            while(n!=0)
            {
                ttl+=n%10;
                n/=10;
            }
            n=ttl;
        }
       printf("%d\n",n);

    }
   return 0;
}
