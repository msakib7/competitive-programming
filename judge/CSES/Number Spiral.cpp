#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tc;
      cin>>tc;
      while(tc--)
      {
          int r,c,ans;
          cin>>r>>c;
          if(c>r||c==r)
          {
              ans=pow(c,2)-(r-1);
              cout<<ans<<endl;
          }
          else
          {
              ans=pow((r-1),2)+c;
              cout<<ans<<endl;
          }
      }
   return 0;
}
