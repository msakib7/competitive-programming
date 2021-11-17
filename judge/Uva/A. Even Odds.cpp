#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,od,evn,ans=0;
    cin>>x>>y;
    evn=x/2;
    od=x-evn;
    //cout<<od<<" "<<evn<<endl;
    if(y<od)
        ans=(y*2)-1;
    else if(y>od)
        ans=(y-od)*2;
    else
        ans=od*2-1;
    cout<<ans<<endl;

  return 0;
}
