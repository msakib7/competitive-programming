#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    int n;
    cin>>n;
    int v[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    set<int>st;
    for(int i=n-1;i>=0;i--)
    {
        if(st.count(v[i])==0&&st.count((-v[i]))==0)
            st.insert(v[i]);
    }
    vector<int>ans(st.begin(),st.end());
    int an=0;
    for(int i=0;i<ans.size();i++)
    {
        an+=ans[i];
    }
    cout<<"Case "<<tc<<": ";
    cout<<an;
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
