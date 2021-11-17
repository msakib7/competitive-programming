#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    int r,c,m,n,cnt[26]={};
    vector<char>v[25];
    cin>>r>>c>>m>>n;
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
            char x;
            cin>>x;
            v[i].push_back(x);
            cnt[x-'A']++;
        }
    }
    int mx=0,mxi=0;
    for(int i=0;i<26;i++)
        {
            if(cnt[i]>mx)
                mx=cnt[i],mxi=0;
            if(cnt[i]==mx)
                    mxi++;
        }
        int ans;
        ans=mx*m*mxi+(r*c-mx*mxi)*n;
        cout<<"Case "<<tc<<": ";
        cout<<ans;
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
