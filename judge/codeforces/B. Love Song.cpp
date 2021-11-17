#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,o,p,cnt=0;
    string v;
    cin>>n>>m;
    cin>>v;
    vector<int>arr;
    arr.push_back(0);
    for(int i=0;i<v.size();i++)
    {
        o=v[i]-'a'+1;
        arr.push_back(o+arr[i]);
    }
    while(m--)
    {
        int x,y,ans;
        cin>>x>>y;
        ans=arr[y]-arr[x-1];
        cout<<ans<<endl;
    }
   return 0;
}
