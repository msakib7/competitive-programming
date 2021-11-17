#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int mx=0,cnt=0;
    mx=v[0];
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]>v[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
   return 0;
}
