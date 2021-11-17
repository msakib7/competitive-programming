#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    map<int,int>mp;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        mp[x]++;
        if(mp[x]==1)
            ans++;
    }
    cout<<ans<<endl;

  return 0;
}
