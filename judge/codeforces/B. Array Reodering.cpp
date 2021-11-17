#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v1,v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x&1)
            v1.push_back(x);
        else
            v2.push_back(x);
    }
    int ans=0,z=1;
    for(int i=v2.size();i>0;i--)
        {
            ans+=n-z;
            z++;
        }
    for(int i=0;i<v1.size();i++)
    {
        for(int j=i+1;j<v1.size();j++)
        {
            if(__gcd(v1[i],v1[j])>1)
                ans++;
        }
    }
    cout<<ans;
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
