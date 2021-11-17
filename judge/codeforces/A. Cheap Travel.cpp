#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,s1=0,s2=0,s3=0,ans;
    cin>>n>>m>>a>>b;
    s1=n*a;
    s2=(n/m)*b+(n%m)*a;
    s3=((n-1)/m+1)*b;
    if(s1<s2)
        ans=s1;
    else
        ans=s2;
    if(ans<s3)
        ans=ans;
    else
        ans=s3;
    cout<<ans<<endl;

  return 0;
}
