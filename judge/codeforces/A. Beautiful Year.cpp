#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,d,ans,m;
    for(int i=1;i<200;i++)
    {
         m=n+1;
         n=m;
        //cout<<n<<endl;
        a=m%10;m/=10;
        b=m%10;m/=10;
        c=m%10;m/=10;
        d=m%10;
        //cout<<a<<" "<<b<<" "<<c<< " "<<d<<endl;
        if((a!=b&&a!=c&&a!=d)&&(b!=c&&b!=d)&&(c!=d))
        {
            ans=n;
            break;
        }

    }
    cout<<ans<<endl;

  return 0;
}
