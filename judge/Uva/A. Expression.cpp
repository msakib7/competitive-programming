#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,a1,a2,a3,a4,a5,ans=0;
    cin>>a>>b>>c;
    a1=a+b+c;
    ans=max(ans,a1);
    a2=a*b*c;
    ans=max(ans,a2);
    a3=(a+b)*c;
    ans=max(ans,a3);
    a4=a*(b+c);
    ans=max(ans,a4);
    cout<<ans;

  return 0;
}
