#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc)
{
   ll n,x,y,r,c;
   cin>>n;
   x=ceil(sqrt(n));
   if(x&1)
   {
       y=n-pow((x-1),2);
       if(x<y)
       {
           r=x;
           c=1+pow(x,2)-n;
       }
       else
       {
           r=y;
           c=x;
       }
   }
   else
   {
      y=n-pow((x-1),2);
       if(x<y)
       {
           c=x;
           r=1+pow(x,2)-n;
       }
       else
       {
           c=y;
           r=x;
       }
   }
   cout<<"Case "<<tc<<": "<<c<<" "<<r;
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
  return 0;
}

