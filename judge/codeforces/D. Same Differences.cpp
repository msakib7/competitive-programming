#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            x-=i;
            mp[x]++;
        }
        long long ans=0;
        for(auto it:mp)
        {
            long long a=it.second;
            ans+=a*(a-1)/2;
        }
        cout<<ans<<endl;
    }
   return 0;
}
