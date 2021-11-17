#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,sum=0,ans=0;
        cin>>n;
        int s=1;
        while(sum<n)
        {
            sum+=s;
            s+=2;
            ans++;
        }
        cout<<ans<<endl;
    }
   return 0;
}
