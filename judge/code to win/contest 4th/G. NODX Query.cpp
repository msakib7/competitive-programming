#include<bits/stdc++.h>
using namespace std;
int dvsr[1000000];
int divisorcount(int n) {
      int divisor=0;
      for (int i=1;i*i<=n;i++) {
        if (i*i==n){
          divisor+=1;
        } else if(n%i==0){
          divisor+=2;
        }
      }
  return divisor;
}
int main()
{
    int c=0;
    int tc,l,r,x;
    for(int i=1;i<=1000000;i++)
       {
           dvsr[c++]=divisorcount(i);
       }
    cin>>tc;
    while(tc--)
    {
       cin>>l>>r>>x;
       int ans=0;
       for(int j=l;j<=r;j++)
            {
                if(dvsr[j]==x)
                    ans++;
            }
       cout<<ans<<endl;
    }
   return 0;
}
