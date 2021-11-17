#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,1});
        v.push_back({y,-1});
    }
    sort(v.begin(),v.end());
    int customar=0;
    int mxcustomar=0;
    for(int i=0;i<v.size();i++)
    {
        customar+=v[i].second;
        mxcustomar=max(mxcustomar,customar);
    }
    cout<<mxcustomar<<endl;
  return 0;
}
