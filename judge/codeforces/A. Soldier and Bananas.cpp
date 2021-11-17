#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,ans=0;
    cin>>k>>n>>w;
    int sum=w*(w+1)/2;
    ans=(sum*k)-n;
    //cout<<sum<<" "<<ans;
    if(ans<0)
        ans=0;
    printf("%d\n",ans);
  return 0;
}
