#include<bits/stdc++.h>
using namespace std;
int factorial(int i)
{
    int fac=1;
    for(int j=i;j>0;j--)
        fac*=j;
    return fac;
}
void solve(int t)
{
   long long n,i=1;
   cin>>n;
   while(1)
   {
       n-=factorial(i);
       if(n<=0)
        break;
       i++;
       cout<<n<<endl;
   }
   for(int j=1;j<i;j++)
    printf("%d+ ",j);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
