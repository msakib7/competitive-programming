#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,sum1,sum2,sum;
    long long cnt=0;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld%lld",&a,&b);
        a--;
        sum1=a*(a+1)/2;
        sum2=b*(b+1)/2;
        cnt+=sum2-sum1;
    }
    printf("%lld\n",cnt);
  return 0;
}
