#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
    long long x;
    if(n<2)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
long long rev(long long n)
{
    long long sum=0;
    while(n!=0)
    {
        long long x;
        x=n%10;
        sum=sum*10+x;
        n/=10;
    }
    return sum;
}
int main()
{
    long long n,x;
    while(scanf("%lld",&n)!=0)
    {
        x=rev(n);
        if(!isprime(n))
        {
            printf("%lld is not prime.\n",n);
        }
       else if(n!=x&&isprime(x))
        {
            printf("%lld is emirp.\n",n);
        }
        else
            printf("%lld is prime.\n",n);
    }
   return 0;
}
