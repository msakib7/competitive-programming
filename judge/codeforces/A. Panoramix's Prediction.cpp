#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int x=sqrt(n)+1;
    if (n <= 1)
        return false;

    for (int i=2;i<=x;i++)
        if (n%i==0)
            return false;

    return true;
}
int main()
{
    int n,m,flg,ans=0,i;
    cin>>n>>m;

    for( i=n+1;i<=m;i++)
    {
       if(isPrime(i))
       {
           //cout<<i<<endl;
           if(i==m)
           {
               flg=1;
               break;
           }
           else
           {
               flg=0;
               break;
           }
       }
    }
    //cout<<flg<<endl;
   if(flg==1)
    cout<<"YES"<<endl;
   else if(flg==0)
    cout<<"NO"<<endl;

  return 0;
}
