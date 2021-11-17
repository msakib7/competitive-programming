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
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    int flg=1,i,cnt=1;
    for(i=0;i<n-1;i++)
    {
        if(v1[i]==v1[i+1])
        {
            flg=0;
        }
        else
            flg=1;
        if(flg==1)
            cnt++;
    }
    cout<<cnt;
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
