#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    map<int,int>mp;
    map<int,int>::iterator it;
    while(1)
    {
        cin>>n>>m;
        if(n+m==0)
            break;
        int x;
        while(n--)
        {
            cin>>x;
            mp[x]++;
        }
        while(m--)
        {
            cin>>x;
            mp[x]++;
        }
        int ans=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            if(it->second==2)
                ans++;
        }
      mp.clear();
     cout<<ans<<endl;

    }
   return 0;
}
