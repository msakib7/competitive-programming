#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int xa,ya,xb,yb,xf,yf;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xf>>yf;
    int ans=0;

      if(((xa>=xf&&ya>=yf)&&(xb>=xf&&yb>=yf))||((xa<=xf&&ya<=yf)&&(xb<=xf&&yb<=yf)))
        {
            ans=abs(xa-xb)+abs(ya-yb);
            cout<<ans;
        }
      else if(xa==xb&&xb==xf)
      {
          ans=abs(ya-yb)+2;
          cout<<ans;
      }
      else if(ya==yb&&yb==yf)
      {
          ans=abs(xa-xb)+2;
          cout<<ans;
      }
      else
      {
          ans=abs(xa-xb)+abs(ya-yb);
            cout<<ans;
      }

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
