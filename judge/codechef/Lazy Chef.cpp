#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=min(a*b,a+c);
        cout<<ans<<endl;
    }
   return 0;
}
