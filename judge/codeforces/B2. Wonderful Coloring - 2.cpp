#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,x;
    cin>>n>>k;
    map<int,int>mp;
    vector<int>v[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        mp[x]++;
        v[x].push_back(i);
    }
    int ans[n+5]={0};
    vector<int>v1;
    for(auto it:mp)
    {
        int a=it.first;
        int b=it.second;
        if(b>=k)
        {
            int c=1;
            for(int i=0;i<k;i++)
            {
                int z=v[a][i];
                ans[z]=c;
                c++;
            }
        }
        else
        {
            for(int i=0;i<v[a].size();i++)
            {
                v1.push_back(v[a][i]);
            }
        }
    }
    int c=1;
    int z=v1.size()%k;
    for(int i=0;i<v1.size()-z;i++)
    {
        int m=v1[i];
        ans[m]=c;
        c++;
        if(c>k)c=1;
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
