#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    int a1=0;
    while (a>0)
  {
    ans+=a;
    a1+=a;
    a=0;
    a+=a1/b;
    a1%=b;
    //printf("%d \n",a1);
  }
    printf("%d\n",ans);
  return 0;
}
