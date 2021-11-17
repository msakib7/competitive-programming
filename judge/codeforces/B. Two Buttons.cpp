#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0,ans=0;
    if(n<m)
    {
        int a=n;
        int b=m;
        while(a<b)
        {
            a*=2;
            cnt++;
            cout<<a<<" "<<cnt<<endl;
        }
        ans=cnt+a-m-1;
    }
    else
        ans=n-m;
    cout<<ans<<endl;

  return 0;
}
