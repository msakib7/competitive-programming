#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,x,y,z,a,b,c,ans=0,cnt=0;
        cin>>n;
        if(n<=6)
        {
            ans=15;
        }
        else
        {
            if(n&1)
                n++;
            ans=(n*5)/2;
        }
       cout<<ans<<endl;
    }
  return 0;
}
