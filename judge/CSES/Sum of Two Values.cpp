#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>vlu(n);
    for(int i=0;i<n;i++)
    {
        cin>>vlu[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.count(vlu[i]))
        {
            cout<<mp[vlu[i]]<<" "<<i+1<<endl;
            return 0;
        }
        mp[x-vlu[i]]=i+1;
    }
    cout<<"IMPOSSIBLE"<<endl;
   return 0;
}
