#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        ll r;
        r=sqrt(n);
        if(r*r==n)
            printf("yes\n");
        else
            printf("no\n");
    }
   return 0;
}
